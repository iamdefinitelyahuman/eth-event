#!/usr/bin/python3

import pytest

from eth_event import decode_event, decode_logs, EventError


def test_decode_event(log, abi):
    decode_event(log, abi)


def test_decode_event_anonymous(anon_a_log, abi):
    with pytest.raises(EventError):
        decode_event(anon_a_log, abi)


def test_decode_complex_event(complex_log, abi):
    event = decode_event(complex_log, abi)
    assert event["name"] == "ComplexTypesEvent"
    data = [i["value"] for i in event["data"]]
    assert data == ["i am a string! such impress", "0x1234567890abcdef"]


def test_decode_logs(log, complex_log, abi):
    decode_logs([log, complex_log], abi)


def test_decode_logs_anonymous(anon_a_log, anon_b_log, complex_log, abi):
    logs = [anon_a_log, complex_log, anon_b_log]
    with pytest.raises(EventError):
        decode_logs(logs, abi, skip_anonymous=False)
    events = decode_logs(logs, abi)
    assert len(events) == 1


def test_decode_insufficient(complex_log, abi):
    complex_log["data"] = complex_log["data"][:-20]
    with pytest.raises(EventError):
        decode_event(complex_log, abi)


def test_decode_overflow(complex_log, abi):
    complex_log["data"] = "0xfffffffffffffffffffffff" + complex_log["data"][2:]
    with pytest.raises(EventError):
        decode_event(complex_log, abi)


def test_decode_missing_topic(indexed_log, abi):
    indexed_log["topics"].pop()
    with pytest.raises(EventError):
        decode_event(indexed_log, abi)
