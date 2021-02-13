#!/usr/bin/python3

import pytest

from eth_event import ABIError, get_log_topic, get_topic_map


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


def test_event_abi(abi):
    result = get_topic_map(abi)
    assert len(result) + 2 == len(abi)


def test_get_log_topic_for_event_with_dynamic_tuple_size_inputs():
    event_abi = {
        "name": "DynamicTupleEvent",
        "type": "event",
        "anonymous": False,
        "inputs": [
            {
                "name": "_foo",
                "type": "tuple[]",
                "indexed": False,
                "components": [{"name": "x", "type": "string"}, {"name": "y", "type": "bytes4[]"}],
            }
        ],
    }
    result = get_log_topic(event_abi)
    assert result == "0xa51b9362db3864a3b79228fc175c8781b95be6435ed9b0528c89ec769e033e34"


def test_get_log_topic_for_event_with_fixed_tuple_size_inputs():
    event_abi = {
        "name": "DynamicTupleEvent",
        "type": "event",
        "anonymous": False,
        "inputs": [
            {
                "name": "_foo",
                "type": "tuple[2]",
                "indexed": False,
                "components": [{"name": "x", "type": "string"}, {"name": "y", "type": "bytes4[]"}],
            }
        ],
    }
    result = get_log_topic(event_abi)
    assert result == "0xa95e22675fbb9c0598f6c3ef02d12b0a8ac59f6b56d9210a5e9f085971384e7a"
