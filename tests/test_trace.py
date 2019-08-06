#!/usr/bin/python3

import json
from pathlib import Path
import pytest

from eth_event import decode_trace


# LOG events are at indexes 378 and 536
@pytest.fixture(scope="session")
def raw_trace():
    trace_json = Path(__file__).parent.joinpath('trace.json')
    with trace_json.open() as fs:
        data = json.load(fs)
    return data


def test_decode_trace_basic(abi, raw_trace):
    events = decode_trace(raw_trace['result']['structLogs'][:400], abi)
    assert len(events) == 1
    assert events[0]['name'] == "BasicTypesEvent"


def test_decode_trace_complex(abi, raw_trace):
    events = decode_trace(raw_trace['result']['structLogs'][400:], abi)
    assert len(events) == 1
    assert events[0]['name'] == "ComplexTypesEvent"
    assert [i['value'] for i in events[0]['data']] == ["hello", "0x6689"]


def test_decode_trace_multiple(abi, raw_trace):
    events = decode_trace(raw_trace, abi)
    assert len(events) == 2
