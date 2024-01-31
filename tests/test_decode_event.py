#!/usr/bin/python3

import pytest

from eth_event import EventError, UnknownEvent, decode_log, decode_logs


def test_decode_log(log, topic_map):
    decode_log(log, topic_map)


def test_decode_log_anonymous(anon_a_log, topic_map):
    with pytest.raises(EventError):
        decode_log(anon_a_log, topic_map)


def test_decode_complex_event(complex_log, topic_map):
    event = decode_log(complex_log, topic_map)
    assert event["name"] == "ComplexTypesEvent"
    data = [i["value"] for i in event["data"]]
    assert data == ["i am a string! such impress", "0x1234567890abcdef"]


def test_decode_logs(log, complex_log, topic_map):
    decode_logs([log, complex_log], topic_map)


def test_decode_logs_allow_undecoded(anon_a_log, anon_b_log, complex_log, topic_map):
    logs = [anon_a_log, complex_log, anon_b_log]
    events = decode_logs(logs, topic_map, allow_undecoded=True)

    assert len(events) == 3
    assert len([i for i in events if i["decoded"]]) == 1


def test_decode_logs_not_allow_undecoded(anon_a_log, topic_map):
    logs = [anon_a_log]
    with pytest.raises(UnknownEvent):
        decode_logs(logs, topic_map, allow_undecoded=False)


def test_decode_logs_no_topic(anon_a_log, topic_map):
    logs = [anon_a_log]
    event = decode_logs(logs, topic_map, allow_undecoded=True)

    assert event == [
        {
            "name": None,
            "address": "0x3194cBDC3dbcd3E11a07892e7bA5c3394048Cc87",
            "data": "0x00000000000000000000000066ab6d9362d4f35596279692f0251db635165871",
            "topics": [],
            "decoded": False,
            "logIndex": 0,
            "blockNumber": 2,
            "transactionIndex": 0,
        }
    ]


def test_decode_insufficient(complex_log, topic_map):
    complex_log["data"] = complex_log["data"][:-20]
    with pytest.raises(EventError):
        decode_log(complex_log, topic_map)


def test_decode_overflow(complex_log, topic_map):
    complex_log["data"] = "0xfffffffffffffffffffffff" + complex_log["data"][2:]
    with pytest.raises(EventError):
        decode_log(complex_log, topic_map)


def test_decode_missing_topic(indexed_log, topic_map):
    indexed_log["topics"].pop()
    with pytest.raises(EventError):
        decode_log(indexed_log, topic_map)
