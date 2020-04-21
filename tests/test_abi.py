#!/usr/bin/python3

import pytest

from eth_event import ABIError, get_event_abi, get_log_topic, get_topics


def test_get_log_topic(abi):
    for i in [i for i in abi if not i["anonymous"]]:
        get_log_topic(i)


def test_get_log_topic_anonymous(abi):
    for i in [i for i in abi if i["anonymous"]]:
        with pytest.raises(ABIError):
            get_log_topic(i)


def test_get_log_topic_contract_abi(abi):
    with pytest.raises(TypeError):
        get_log_topic(abi)


def test_get_topics(abi):
    result = get_topics(abi)
    assert len(result) + 2 == len(abi)


def test_get_topics_event_abi(abi):
    with pytest.raises(TypeError):
        get_topics(abi[0])


def test_event_abi(abi):
    result = get_event_abi(abi)
    assert len(result) + 2 == len(abi)
