#!/usr/bin/python3

import json
from pathlib import Path

import pytest

from eth_event import StructLogError, UnknownEvent, decode_traceTransaction


# LOG events are at indexes 378 and 536
@pytest.fixture
def raw_trace():
    trace_json = Path(__file__).parent.joinpath("trace.json")
    with trace_json.open() as fs:
        data = json.load(fs)
    return data["result"]["structLogs"]


def test_basic(topic_map, raw_trace):
    events = decode_traceTransaction(raw_trace[:400], topic_map)
    assert len(events) == 1
    assert events[0]["name"] == "BasicTypesEvent"


def test_complex(topic_map, raw_trace):
    events = decode_traceTransaction(raw_trace[400:], topic_map)
    assert len(events) == 1
    assert events[0]["name"] == "ComplexTypesEvent"
    assert [i["value"] for i in events[0]["data"]] == ["hello", "0x6689"]


def test_multiple(topic_map, raw_trace):
    events = decode_traceTransaction(raw_trace, topic_map)
    assert len(events) == 2


def test_decode_raises(topic_map, raw_trace):
    del raw_trace[378]["memory"]
    with pytest.raises(StructLogError):
        decode_traceTransaction(raw_trace[:400], topic_map)
    raw_trace[378]["stack"] = []
    with pytest.raises(StructLogError):
        decode_traceTransaction(raw_trace[:400], topic_map)
    del raw_trace[378]["stack"]
    with pytest.raises(StructLogError):
        decode_traceTransaction(raw_trace[:400], topic_map)


def test_allow_undecoded(raw_trace):
    decode_traceTransaction(raw_trace, [], allow_undecoded=True)


def test_not_allow_undecoded(raw_trace):
    with pytest.raises(UnknownEvent):
        decode_traceTransaction(raw_trace, [], allow_undecoded=False)
