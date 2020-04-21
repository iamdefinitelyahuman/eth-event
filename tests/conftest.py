#!/usr/bin/python3

import pytest
from hexbytes import HexBytes

from eth_event import get_topic_map

# missing 'data' and 'topics'
BASE_LOG = {
    "logIndex": 0,
    "transactionIndex": 0,
    "transactionHash": HexBytes(
        "0x9df54439626e5b7fce5ae2f02af47d86535bedaf533403204fcb76ba12eef21c"
    ),  # NOQA: E501
    "blockHash": HexBytes("0xaae58fedb68b648857a24b4a29f3e7f2a905d5098a912562f7ddb895e129b087"),
    "blockNumber": 2,
    "address": "0x3194cBDC3dbcd3E11a07892e7bA5c3394048Cc87",
    "type": "mined",
}

LOGS = [
    (  # BasicTypesEvent
        "0x000000000000000000000000000000000000000000000000000000000000000cffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffea00000000000000000000000066ab6d9362d4f35596279692f0251db635165871000000000000000000000000000000000000000000000000000000000000000100000000000000000000000000000000000000000000000000000000deadbeef",  # NOQA: E501
        [HexBytes("0x8be90ba92d3b46c912717b5514ae2cfde5e9acbb5980c2ec5ea937d7586d82ed")],
    ),
    (  # ComplexTypesEvent
        "0x00000000000000000000000000000000000000000000000000000000000000400000000000000000000000000000000000000000000000000000000000000080000000000000000000000000000000000000000000000000000000000000001b6920616d206120737472696e6721207375636820696d7072657373000000000000000000000000000000000000000000000000000000000000000000000000081234567890abcdef000000000000000000000000000000000000000000000000",  # NOQA: E501
        [HexBytes("0x34dee2aae457a1f92adebb1c2acc5ea1acfb088b578a4974c114e8082bf6500f")],
    ),
    (  # FixedLengthArrayEvent
        "0x0000000000000000000000000000000000000000000000000000000000000001000000000000000000000000000000000000000000000000000000000000000200000000000000000000000000000000000000000000000000000000000000030000000000000000000000000000000000000000000000000000000000000004ffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffd6000000000000000000000000000000000000000000000000000000000000002a00000000000000000000000066ab6d9362d4f35596279692f0251db635165871000000000000000000000000000000000000000000000000000000000000000000000000000000000000000066ab6d9362d4f35596279692f0251db6351658710000000000000000000000000000000000000000000000000000000000000001000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000deadbeef00000000000000000000000000000000000000000000000000000000069faded",  # NOQA: E501
        [HexBytes("0x317cac24adbc0db1e065b9fe727c569313ba08d3e641d73a55955da25c10f1b9")],
    ),
    (  # DynamicArrayEvent
        "0x00000000000000000000000000000000000000000000000000000000000000a0000000000000000000000000000000000000000000000000000000000000014000000000000000000000000000000000000000000000000000000000000001a000000000000000000000000000000000000000000000000000000000000002000000000000000000000000000000000000000000000000000000000000000260000000000000000000000000000000000000000000000000000000000000000400000000000000000000000000000000000000000000000000000000000000010000000000000000000000000000000000000000000000000000000000000002000000000000000000000000000000000000000000000000000000000000000300000000000000000000000000000000000000000000000000000000000000040000000000000000000000000000000000000000000000000000000000000002ffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffd6000000000000000000000000000000000000000000000000000000000000002a000000000000000000000000000000000000000000000000000000000000000200000000000000000000000066ab6d9362d4f35596279692f0251db6351658710000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000200000000000000000000000000000000000000000000000000000000000000010000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000100000000000000000000000000000000000000000000000000000000deadbeef",  # NOQA: E501
        [HexBytes("0x15bf5b2fd85b349c3ba8e0687fef3f75d19530656850746a30caed288a9d834b")],
    ),
    (  # StructEvent
        "0x0000000000000000000000000000000000000000000000000000000000000040000000000000000000000000000000000000000000000000000000000000010000000000000000000000000000000000000000000000000000000000000000400000000000000000000000000000000000000000000000000000000000000080000000000000000000000000000000000000000000000000000000000000000d6e6f407468616e6b732e636f6d00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000f2b3120353535203535352d313233340000000000000000000000000000000000000000000000000000000000000000000000000000000000000000006173646600000000000000000000000033a4622b82d4c04a53e170c638b944ce27cffce3000000000000000000000000000000000000000000000000000000000000006000000000000000000000000000000000000000000000000000000000000000400000000000000000000000000000000000000000000000000000000000000080000000000000000000000000000000000000000000000000000000000000000d6e6f407468616e6b732e636f6d00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000f2b3120353535203535352d313233340000000000000000000000000000000000",  # NOQA: E501
        [HexBytes("0x2879c8a0baaa8a22a224aed7d8635b7d8e760d16c3f082cd5eba35e9775ab8fc")],
    ),
    (  # IndexedEvent
        "0x000000000000000000000000000000000000000000000000000000000000123400000000000000000000000066ab6d9362d4f35596279692f0251db635165871",  # NOQA: E501
        [
            HexBytes("0x7e4de51bd76e0680c76e06c0d5694cb33ce2f8c99b62ba846409bce9014638e0"),
            HexBytes("0x6e12a6379ea806efe7913a2e70ca6b83ef6d457210264b417f34e79bf5a4e2e9"),
            HexBytes("0x0000000000000000000000000000000000000000000000000000000000000666"),
        ],  # NOQA: E501
    ),
]


@pytest.fixture(scope="session")
def abi():
    return [
        {
            "name": "BasicTypesEvent",
            "type": "event",
            "anonymous": False,
            "inputs": [
                {"indexed": False, "name": "a", "type": "uint256"},
                {"indexed": False, "name": "b", "type": "int128"},
                {"indexed": False, "name": "c", "type": "address"},
                {"indexed": False, "name": "d", "type": "bool"},
                {"indexed": False, "name": "e", "type": "bytes32"},
            ],
        },
        {
            "name": "ComplexTypesEvent",
            "type": "event",
            "anonymous": False,
            "inputs": [
                {"indexed": False, "name": "a", "type": "string"},
                {"indexed": False, "name": "b", "type": "bytes"},
            ],
        },
        {
            "name": "FixedLengthArrayEvent",
            "type": "event",
            "anonymous": False,
            "inputs": [
                {"indexed": False, "name": "a", "type": "uint64[4]"},
                {"indexed": False, "name": "b", "type": "int128[2]"},
                {"indexed": False, "name": "c", "type": "address[3]"},
                {"indexed": False, "name": "d", "type": "bool[2]"},
                {"indexed": False, "name": "e", "type": "bytes32[2]"},
            ],
        },
        {
            "name": "DynamicArrayEvent",
            "type": "event",
            "anonymous": False,
            "inputs": [
                {"indexed": False, "name": "a", "type": "uint64[]"},
                {"indexed": False, "name": "b", "type": "int128[]"},
                {"indexed": False, "name": "c", "type": "address[]"},
                {"indexed": False, "name": "d", "type": "bool[]"},
                {"indexed": False, "name": "e", "type": "bytes32[]"},
            ],
        },
        {
            "name": "StructEvent",
            "type": "event",
            "anonymous": False,
            "inputs": [
                {
                    "name": "a",
                    "type": "tuple",
                    "indexed": False,
                    "components": [
                        {"name": "email", "type": "string"},
                        {"name": "phone", "type": "string"},
                    ],
                },
                {
                    "name": "b",
                    "type": "tuple",
                    "indexed": False,
                    "components": [
                        {"name": "name", "type": "bytes32"},
                        {"name": "addr", "type": "address"},
                        {
                            "name": "contact",
                            "type": "tuple",
                            "components": [
                                {"name": "email", "type": "string"},
                                {"name": "phone", "type": "string"},
                            ],
                        },
                    ],
                },
            ],
        },
        {
            "name": "IndexedEvent",
            "type": "event",
            "anonymous": False,
            "inputs": [
                {"indexed": False, "name": "a", "type": "bytes32"},
                {"indexed": True, "name": "b", "type": "bytes32[2]"},
                {"indexed": True, "name": "c", "type": "bytes32"},
                {"indexed": False, "name": "d", "type": "address"},
            ],
        },
        {
            "name": "AnonymousEventA",
            "type": "event",
            "anonymous": True,
            "inputs": [{"indexed": False, "name": "a", "type": "address"}],
        },
        {
            "name": "AnonymousEventB",
            "type": "event",
            "anonymous": True,
            "inputs": [
                {"indexed": False, "name": "a", "type": "bytes32"},
                {"indexed": False, "name": "b", "type": "uint256"},
            ],
        },
    ]


@pytest.fixture(scope="session")
def topic_map(abi):
    return get_topic_map(abi)


# auto-parametrize the log fixture with all expected-passing logs
def pytest_generate_tests(metafunc):
    log_params = []
    for data, topics in LOGS:
        log = BASE_LOG.copy()
        log["data"] = data
        log["topics"] = topics
        log_params.append(log)
    if "log" in metafunc.fixturenames:
        metafunc.parametrize("log", log_params)


@pytest.fixture
def complex_log():
    log = BASE_LOG.copy()
    log["data"] = LOGS[1][0]
    log["topics"] = LOGS[1][1]
    return log


@pytest.fixture
def indexed_log():
    log = BASE_LOG.copy()
    log["data"] = LOGS[5][0]
    log["topics"] = LOGS[5][1]
    return log


@pytest.fixture(scope="session")
def anon_a_log():
    log = BASE_LOG.copy()
    log["data"] = "0x00000000000000000000000066ab6d9362d4f35596279692f0251db635165871"  # NOQA: E501
    log["topics"] = []
    return log


@pytest.fixture(scope="session")
def anon_b_log():
    log = BASE_LOG.copy()
    log[
        "data"
    ] = "0x0000000000000000000000000000000000000000000000000000000000012345000000000000000000000000000000000000000000000000000000000000002a"  # NOQA: E501
    log["topics"] = []
    return log
