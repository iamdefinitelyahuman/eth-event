import faster_eth_abi
import pytest
from pytest_codspeed import BenchmarkFixture

from eth_event import main


# --- Event ABIs and logs for common on-chain event types ---

# 1. ERC20 Transfer (address, address, uint256)
transfer_event_abi = {
    "name": "Transfer",
    "type": "event",
    "inputs": [
        {"name": "from", "type": "address", "indexed": True},
        {"name": "to", "type": "address", "indexed": True},
        {"name": "value", "type": "uint256", "indexed": False},
    ],
}
transfer_topic = main.get_log_topic(transfer_event_abi)
transfer_topic_map = {
    transfer_topic: {
        "name": "Transfer",
        "inputs": transfer_event_abi["inputs"],
    }
}
transfer_log = {
    "address": "0x0000000000000000000000000000000000000000",
    "topics": [
        transfer_topic,
        "0x000000000000000000000000000000000000000000000000000000000000dead",
        "0x000000000000000000000000000000000000000000000000000000000000beef",
    ],
    "data": "0x" + faster_eth_abi.encode(["uint256"], [123456789]).hex(),
}

# 2. ERC20 Approval (address, address, uint256)
approval_event_abi = {
    "name": "Approval",
    "type": "event",
    "inputs": [
        {"name": "owner", "type": "address", "indexed": True},
        {"name": "spender", "type": "address", "indexed": True},
        {"name": "value", "type": "uint256", "indexed": False},
    ],
}
approval_topic = main.get_log_topic(approval_event_abi)
approval_topic_map = {
    approval_topic: {
        "name": "Approval",
        "inputs": approval_event_abi["inputs"],
    }
}
approval_log = {
    "address": "0x0000000000000000000000000000000000000000",
    "topics": [
        approval_topic,
        "0x000000000000000000000000000000000000000000000000000000000000cafe",
        "0x000000000000000000000000000000000000000000000000000000000000babe",
    ],
    "data": "0x" + faster_eth_abi.encode(["uint256"], [987654321]).hex(),
}

# 3. OwnershipTransferred (address, address)
ownership_event_abi = {
    "name": "OwnershipTransferred",
    "type": "event",
    "inputs": [
        {"name": "previousOwner", "type": "address", "indexed": True},
        {"name": "newOwner", "type": "address", "indexed": True},
    ],
}
ownership_topic = main.get_log_topic(ownership_event_abi)
ownership_topic_map = {
    ownership_topic: {
        "name": "OwnershipTransferred",
        "inputs": ownership_event_abi["inputs"],
    }
}
ownership_log = {
    "address": "0x0000000000000000000000000000000000000000",
    "topics": [
        ownership_topic,
        "0x0000000000000000000000000000000000000000000000000000000000001234",
        "0x0000000000000000000000000000000000000000000000000000000000005678",
    ],
    "data": "0x",
}

# 4. DataStored (uint256, bytes32, string, bool)
datastored_event_abi = {
    "name": "DataStored",
    "type": "event",
    "inputs": [
        {"name": "id", "type": "uint256", "indexed": True},
        {"name": "hash", "type": "bytes32", "indexed": False},
        {"name": "description", "type": "string", "indexed": False},
        {"name": "flag", "type": "bool", "indexed": False},
    ],
}
datastored_topic = main.get_log_topic(datastored_event_abi)
datastored_topic_map = {
    datastored_topic: {
        "name": "DataStored",
        "inputs": datastored_event_abi["inputs"],
    }
}
datastored_log = {
    "address": "0x0000000000000000000000000000000000000000",
    "topics": [
        datastored_topic,
        "0x" + "01".zfill(64),
    ],
    "data": "0x"
    + faster_eth_abi.encode(
        ["bytes32", "string", "bool"], [b"\xab" * 32, "test description", True]
    ).hex(),
}

# 5. ArrayEvent (uint256[], address[])
array_event_abi = {
    "name": "ArrayEvent",
    "type": "event",
    "inputs": [
        {"name": "numbers", "type": "uint256[]", "indexed": False},
        {"name": "accounts", "type": "address[]", "indexed": False},
    ],
}
array_event_topic = main.get_log_topic(array_event_abi)
array_event_topic_map = {
    array_event_topic: {
        "name": "ArrayEvent",
        "inputs": array_event_abi["inputs"],
    }
}
array_event_log = {
    "address": "0x0000000000000000000000000000000000000000",
    "topics": [array_event_topic],
    "data": "0x"
    + faster_eth_abi.encode(
        ["uint256[]", "address[]"],
        [
            [1, 2, 3],
            [
                "0x0000000000000000000000000000000000000001",
                "0x0000000000000000000000000000000000000002",
            ],
        ],
    ).hex(),
}

# 6. NestedStructEvent (tuple, uint256)
nested_struct_event_abi = {
    "name": "NestedStructEvent",
    "type": "event",
    "inputs": [
        {
            "name": "info",
            "type": "tuple",
            "components": [
                {"name": "a", "type": "uint256"},
                {"name": "b", "type": "address"},
                {"name": "c", "type": "bytes32"},
            ],
            "indexed": False,
        },
        {"name": "count", "type": "uint256", "indexed": False},
    ],
}
nested_struct_event_topic = main.get_log_topic(nested_struct_event_abi)
nested_struct_event_topic_map = {
    nested_struct_event_topic: {
        "name": "NestedStructEvent",
        "inputs": nested_struct_event_abi["inputs"],
    }
}
nested_struct_event_log = {
    "address": "0x0000000000000000000000000000000000000000",
    "topics": [nested_struct_event_topic],
    "data": "0x"
    + faster_eth_abi.encode(
        ["(uint256,address,bytes32)", "uint256"],
        [(42, "0x0000000000000000000000000000000000000042", b"\x01" * 32), 7],
    ).hex(),
}

# 7. DynamicBytesEvent (bytes, bytes32)
dynamic_bytes_event_abi = {
    "name": "DynamicBytesEvent",
    "type": "event",
    "inputs": [
        {"name": "data", "type": "bytes", "indexed": False},
        {"name": "hash", "type": "bytes32", "indexed": False},
    ],
}
dynamic_bytes_event_topic = main.get_log_topic(dynamic_bytes_event_abi)
dynamic_bytes_event_topic_map = {
    dynamic_bytes_event_topic: {
        "name": "DynamicBytesEvent",
        "inputs": dynamic_bytes_event_abi["inputs"],
    }
}
dynamic_bytes_event_log = {
    "address": "0x0000000000000000000000000000000000000000",
    "topics": [dynamic_bytes_event_topic],
    "data": "0x" + faster_eth_abi.encode(["bytes", "bytes32"], [b"\xff" * 10, b"\xab" * 32]).hex(),
}

# 8. FixedArrayEvent (uint8[3], address[2])
fixed_array_event_abi = {
    "name": "FixedArrayEvent",
    "type": "event",
    "inputs": [
        {"name": "nums", "type": "uint8[3]", "indexed": False},
        {"name": "addrs", "type": "address[2]", "indexed": False},
    ],
}
fixed_array_event_topic = main.get_log_topic(fixed_array_event_abi)
fixed_array_event_topic_map = {
    fixed_array_event_topic: {
        "name": "FixedArrayEvent",
        "inputs": fixed_array_event_abi["inputs"],
    }
}
fixed_array_event_log = {
    "address": "0x0000000000000000000000000000000000000000",
    "topics": [fixed_array_event_topic],
    "data": "0x"
    + faster_eth_abi.encode(
        ["uint8[3]", "address[2]"],
        [
            [1, 2, 3],
            [
                "0x0000000000000000000000000000000000000003",
                "0x0000000000000000000000000000000000000004",
            ],
        ],
    ).hex(),
}

# 9. EnumEvent (uint8)
enum_event_abi = {
    "name": "EnumEvent",
    "type": "event",
    "inputs": [
        {"name": "status", "type": "uint8", "indexed": False},
    ],
}
enum_event_topic = main.get_log_topic(enum_event_abi)
enum_event_topic_map = {
    enum_event_topic: {
        "name": "EnumEvent",
        "inputs": enum_event_abi["inputs"],
    }
}
enum_event_log = {
    "address": "0x0000000000000000000000000000000000000000",
    "topics": [enum_event_topic],
    "data": "0x" + faster_eth_abi.encode(["uint8"], [2]).hex(),
}

# 10. OnlyIndexedEvent (address indexed, uint256 indexed)
only_indexed_event_abi = {
    "name": "OnlyIndexedEvent",
    "type": "event",
    "inputs": [
        {"name": "who", "type": "address", "indexed": True},
        {"name": "amount", "type": "uint256", "indexed": True},
    ],
}
only_indexed_event_topic = main.get_log_topic(only_indexed_event_abi)
only_indexed_event_topic_map = {
    only_indexed_event_topic: {
        "name": "OnlyIndexedEvent",
        "inputs": only_indexed_event_abi["inputs"],
    }
}
only_indexed_event_log = {
    "address": "0x0000000000000000000000000000000000000000",
    "topics": [
        only_indexed_event_topic,
        "0x000000000000000000000000000000000000000000000000000000000000aaaa",
        "0x000000000000000000000000000000000000000000000000000000000000bbbb",
    ],
    "data": "0x",
}

# 11. NoIndexedEvent (uint256, string)
no_indexed_event_abi = {
    "name": "NoIndexedEvent",
    "type": "event",
    "inputs": [
        {"name": "id", "type": "uint256", "indexed": False},
        {"name": "desc", "type": "string", "indexed": False},
    ],
}
no_indexed_event_topic = main.get_log_topic(no_indexed_event_abi)
no_indexed_event_topic_map = {
    no_indexed_event_topic: {
        "name": "NoIndexedEvent",
        "inputs": no_indexed_event_abi["inputs"],
    }
}
no_indexed_event_log = {
    "address": "0x0000000000000000000000000000000000000000",
    "topics": [no_indexed_event_topic],
    "data": "0x" + faster_eth_abi.encode(["uint256", "string"], [42, "no indexed"]).hex(),
}

# --- Benchmarks for each event type ---


@pytest.mark.benchmark(group="get_log_topic")
@pytest.mark.parametrize(
    "event_abi",
    [
        transfer_event_abi,
        approval_event_abi,
        ownership_event_abi,
        datastored_event_abi,
        array_event_abi,
        nested_struct_event_abi,
        dynamic_bytes_event_abi,
        fixed_array_event_abi,
        enum_event_abi,
        only_indexed_event_abi,
        no_indexed_event_abi,
    ],
    ids=[
        "Transfer",
        "Approval",
        "OwnershipTransferred",
        "DataStored",
        "ArrayEvent",
        "NestedStructEvent",
        "DynamicBytesEvent",
        "FixedArrayEvent",
        "EnumEvent",
        "OnlyIndexedEvent",
        "NoIndexedEvent",
    ],
)
def test_get_log_topic(benchmark: BenchmarkFixture, event_abi):
    benchmark(main.get_log_topic, event_abi)


@pytest.mark.benchmark(group="decode_log")
@pytest.mark.parametrize(
    "log, topic_map",
    [
        (transfer_log, transfer_topic_map),
        (approval_log, approval_topic_map),
        (ownership_log, ownership_topic_map),
        (datastored_log, datastored_topic_map),
        (array_event_log, array_event_topic_map),
        (nested_struct_event_log, nested_struct_event_topic_map),
        (dynamic_bytes_event_log, dynamic_bytes_event_topic_map),
        (fixed_array_event_log, fixed_array_event_topic_map),
        (enum_event_log, enum_event_topic_map),
        (only_indexed_event_log, only_indexed_event_topic_map),
        (no_indexed_event_log, no_indexed_event_topic_map),
    ],
    ids=[
        "Transfer",
        "Approval",
        "OwnershipTransferred",
        "DataStored",
        "ArrayEvent",
        "NestedStructEvent",
        "DynamicBytesEvent",
        "FixedArrayEvent",
        "EnumEvent",
        "OnlyIndexedEvent",
        "NoIndexedEvent",
    ],
)
def test_decode_log(benchmark: BenchmarkFixture, log, topic_map):
    benchmark(main.decode_log, log, topic_map)


# Sample ABI list for get_topic_map and decode_logs
sample_abi = [
    transfer_event_abi,
    approval_event_abi,
    ownership_event_abi,
    datastored_event_abi,
    array_event_abi,
    nested_struct_event_abi,
    dynamic_bytes_event_abi,
    fixed_array_event_abi,
    enum_event_abi,
    only_indexed_event_abi,
    no_indexed_event_abi,
]


@pytest.mark.benchmark(group="get_topic_map")
def test_get_topic_map(benchmark: BenchmarkFixture):
    benchmark(main.get_topic_map, sample_abi)


# Sample logs for decode_logs
sample_logs = [
    transfer_log,
    approval_log,
    ownership_log,
    datastored_log,
    array_event_log,
    nested_struct_event_log,
    dynamic_bytes_event_log,
    fixed_array_event_log,
    enum_event_log,
    only_indexed_event_log,
    no_indexed_event_log,
]
sample_topic_map = main.get_topic_map(sample_abi)


@pytest.mark.benchmark(group="decode_logs")
def test_decode_logs(benchmark: BenchmarkFixture):
    benchmark(main.decode_logs, sample_logs, sample_topic_map, False)


# Simulate a LOG3 opcode with the Transfer topic and ABI-encoded value in memory.
transfer_value = 123456789
transfer_data_bytes = faster_eth_abi.encode(["uint256"], [transfer_value])
transfer_data_hex = transfer_data_bytes.hex().rjust(64, "0")
transfer_memory = [transfer_data_hex]

# Use the same topics as in transfer_log for from and to
from_topic = "0x000000000000000000000000000000000000000000000000000000000000dead"
to_topic = "0x000000000000000000000000000000000000000000000000000000000000beef"

sample_struct_logs = [
    {
        "depth": 0,
        "op": "CALL",
        "stack": ["0x0"] * 10,
        "memory": transfer_memory,
    },
    {
        "depth": 0,
        "op": "LOG3",
        "stack": (
            ["0x0"] * 5 +
            [from_topic, to_topic, transfer_topic, "0x20", "0x00"]  # topic2, topic1, topic0, length, offset
        ),
        "memory": transfer_memory,
    },
]

@pytest.mark.benchmark(group="decode_traceTransaction")
def test_decode_traceTransaction(benchmark: BenchmarkFixture):
    benchmark(main.decode_traceTransaction, sample_struct_logs, sample_topic_map, False, None)
