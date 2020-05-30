import pytest
from hexbytes import HexBytes

from eth_event import EventError, decode_log, get_topic_map

abi_no_indexes = {
    "anonymous": False,
    "inputs": [
        {"indexed": False, "name": "sender", "type": "address"},
        {"indexed": False, "name": "receiver", "type": "address"},
        {"indexed": False, "name": "value", "type": "uint256"},
    ],
    "name": "Transfer",
    "type": "event",
}

abi_two_indexes = {
    "anonymous": False,
    "inputs": [
        {"indexed": True, "name": "sender", "type": "address"},
        {"indexed": True, "name": "receiver", "type": "address"},
        {"indexed": False, "name": "value", "type": "uint256"},
    ],
    "name": "Transfer",
    "type": "event",
}

log_no_indexes = {
    "logIndex": 0,
    "transactionIndex": 0,
    "transactionHash": HexBytes(
        "0xe1997c46647f74afdffb1473930f90b0ebf6902a75dda0d0c3cbd6d1b57a91e1"
    ),
    "blockHash": HexBytes("0xf571bead3dcf424322ddd02fa7fc0496e06386bef4029de55e2255dee4945cdf"),
    "blockNumber": 4,
    "address": "0xE7eD6747FaC5360f88a2EFC03E00d25789F69291",
    "data": "0x00000000000000000000000066ab6d9362d4f35596279692f0251db63516587100000000000000000000000066ab6d9362d4f35596279692f0251db6351658710000000000000000000000000000000000000000000000000000000000002710",  # noqa: E501
    "topics": [HexBytes("0xddf252ad1be2c89b69c2b068fc378daa952ba7f163c4a11628f55a4df523b3ef")],
    "type": "mined",
}

log_one_index = {
    "logIndex": 0,
    "transactionIndex": 0,
    "transactionHash": HexBytes(
        "0xe6eba721271cedb7a492c513d5dfedab73cc54f1a5a337fb027d23f523cada49"
    ),
    "blockHash": HexBytes("0x764e1736dc9cba192b2ebf2911abcad9168d4db35850a678600637f5a6de27ed"),
    "blockNumber": 4,
    "address": "0xE7eD6747FaC5360f88a2EFC03E00d25789F69291",
    "data": "0x00000000000000000000000066ab6d9362d4f35596279692f0251db6351658710000000000000000000000000000000000000000000000000000000000002710",  # noqa: E501
    "topics": [
        HexBytes("0xddf252ad1be2c89b69c2b068fc378daa952ba7f163c4a11628f55a4df523b3ef"),
        HexBytes("0x00000000000000000000000033a4622b82d4c04a53e170c638b944ce27cffce3"),
    ],
    "type": "mined",
}

log_two_indexes = {
    "logIndex": 0,
    "transactionIndex": 0,
    "transactionHash": HexBytes(
        "0xe6eba721271cedb7a492c513d5dfedab73cc54f1a5a337fb027d23f523cada49"
    ),
    "blockHash": HexBytes("0x764e1736dc9cba192b2ebf2911abcad9168d4db35850a678600637f5a6de27ed"),
    "blockNumber": 4,
    "address": "0xE7eD6747FaC5360f88a2EFC03E00d25789F69291",
    "data": "0x0000000000000000000000000000000000000000000000000000000000002710",
    "topics": [
        HexBytes("0xddf252ad1be2c89b69c2b068fc378daa952ba7f163c4a11628f55a4df523b3ef"),
        HexBytes("0x00000000000000000000000066ab6d9362d4f35596279692f0251db635165871"),
        HexBytes("0x00000000000000000000000033a4622b82d4c04a53e170c638b944ce27cffce3"),
    ],
    "type": "mined",
}


def test_no_topics_in_log():
    topic_map = get_topic_map([abi_two_indexes])
    decode_log(log_no_indexes, topic_map)


def test_too_many_log_topics():
    topic_map = get_topic_map([abi_no_indexes])
    with pytest.raises(EventError, match="does not contain enough topics"):
        decode_log(log_two_indexes, topic_map)


def test_insufficient_log_topics():
    topic_map = get_topic_map([abi_two_indexes])
    with pytest.raises(EventError, match="more topics than expected"):
        decode_log(log_one_index, topic_map)
