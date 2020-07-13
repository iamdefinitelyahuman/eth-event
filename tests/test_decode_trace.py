#!/usr/bin/python3

import json
from pathlib import Path

import pytest

from eth_event import StructLogError, UnknownEvent, decode_traceTransaction


# LOG events are at indexes 371 and 428
@pytest.fixture
def raw_trace():
    trace_json = Path(__file__).parent.joinpath("trace.json")
    with trace_json.open() as fs:
        data = json.load(fs)
    return data["result"]["structLogs"]


def test_basic(topic_map, raw_trace):
    events = decode_traceTransaction(raw_trace[:400], topic_map)
    assert len(events) == 1
    assert events[0]["name"] == "ComplexTypesEvent"
    assert [i["value"] for i in events[0]["data"]] == ["hello", "0x6689"]


def test_complex(topic_map, raw_trace):
    events = decode_traceTransaction(raw_trace[400:], topic_map)
    assert len(events) == 1
    assert events[0]["name"] == "BasicTypesEvent"
    assert [i["value"] for i in events[0]["data"]] == [
        23,
        -42,
        "0x31a66f30252cb3983cb4bf10dd6cb9bf67e304d9",
        True,
        "0x0000000000000000000000000000000000000000000000000000000000001234",
    ]


def test_multiple(topic_map, raw_trace):
    events = decode_traceTransaction(raw_trace, topic_map)
    assert len(events) == 2


def test_address(topic_map, raw_trace):
    events = decode_traceTransaction(
        raw_trace, topic_map, initial_address="0x31a66f30252cb3983cb4bf10dd6cb9bf67e304d9"
    )
    assert events[0]["address"] == "0xd495633B90a237de510B4375c442C0469D3C161C"
    assert events[1]["address"] == "0x31A66F30252cb3983CB4BF10Dd6cb9Bf67e304D9"


def test_no_address(topic_map, raw_trace):
    events = decode_traceTransaction(raw_trace, topic_map)
    assert events[0]["address"] is None
    assert events[1]["address"] is None


def test_decode_raises(topic_map, raw_trace):
    del raw_trace[371]["memory"]
    with pytest.raises(StructLogError):
        decode_traceTransaction(raw_trace[:400], topic_map)
    raw_trace[371]["stack"] = []
    with pytest.raises(StructLogError):
        decode_traceTransaction(raw_trace[:400], topic_map)
    del raw_trace[371]["stack"]
    with pytest.raises(StructLogError):
        decode_traceTransaction(raw_trace[:400], topic_map)


def test_allow_undecoded(raw_trace):
    decode_traceTransaction(raw_trace, [], allow_undecoded=True)


def test_not_allow_undecoded(raw_trace):
    with pytest.raises(UnknownEvent):
        decode_traceTransaction(raw_trace, [], allow_undecoded=False)
