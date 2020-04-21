# eth-event

[![Pypi Status](https://img.shields.io/pypi/v/eth-event.svg)](https://pypi.org/project/eth-event/) [![Build Status](https://img.shields.io/travis/com/iamdefinitelyahuman/eth-event.svg)](https://travis-ci.com/iamdefinitelyahuman/eth-event) [![Coverage Status](https://coveralls.io/repos/github/iamdefinitelyahuman/eth-event/badge.svg?branch=master)](https://coveralls.io/github/iamdefinitelyahuman/eth-event?branch=master)

Tools for Ethereum event decoding and topic generation.

## Installation

You can install the latest release via `pip`:

```bash
pip install eth-event
```

Or clone the repository and use `setuptools` for the most up-to-date version:

```bash
git clone https://github.com/iamdefinitelyahuman/eth-event.git
cd eth-event
python3 setup.py install
```

## Usage

The public API is well documented within the docstrings. The following example may also help:

```python
>>> from eth_event import get_topics

# generating a topic map
>>> abi = open('abi.json').read()
>>> topic_map = get_topic_map(abi)
>>> topic_map
{
    '0xddf252ad1be2c89b69c2b068fc378daa952ba7f163c4a11628f55a4df523b3ef': {
        'name': 'Transfer',
        'inputs': [
            {'name': 'from', 'type': 'address', 'indexed': True},
            {'name': 'to', 'type': 'address', 'indexed': True},
            {'name': 'value', 'type': 'uint256', 'indexed': False}
        ]
    }
}

# decoding event logs from a transaction receipt
>>> tx = token.transfer(account[1], 100, {'from': account[0]})
<Transaction object '0x615a157e84715d5f960a38fe2a3ddb566c8393cfc71f15b06170a0eff74dfdde'>
>>> eth_event.decode_logs(tx.logs, topic_map)
[{
    'name': 'Transfer',
    'data': [
        {'name': 'from', 'type': 'address', 'value': '0xbd4940951bfa463f8fb6db762e55686f6cfdb73a', 'decoded': True},
        {'name': 'to', 'type': 'address', 'value': '0xbd4940951bfa463f8fb6db762e55686f6cfdb73a', 'decoded': True},
        {'name': 'tokens', 'type': 'uint256', 'value': 100, 'decoded': True}
    ]
}]

# decoding a structLog from Geth's debug_traceTransaction endpoint
>>> trace = web3.provider.make_request(
    "debug_traceTransaction",
    ['0x615a157e84715d5f960a38fe2a3ddb566c8393cfc71f15b06170a0eff74dfdde', {}]
)
>>> struct_log = trace['result']['structLogs']

>>> eth_event.decode_trace(struct_log, topic_map)
[{
    'name': 'Transfer',
    'data': [
        {'name': 'from', 'type': 'address', 'value': '0xbd4940951bfa463f8fb6db762e55686f6cfdb73a', 'decoded': True},
        {'name': 'to', 'type': 'address', 'value': '0xbd4940951bfa463f8fb6db762e55686f6cfdb73a', 'decoded': True},
        {'name': 'tokens', 'type': 'uint256', 'value': 100, 'decoded': True}
    ]
}]
```

## Limitations

* If an array is indexed in an event, the topic is generated as a sha3 hash and so cannot be decrypted. In this case, the unencrypted topic is returned and `decoded` is set to `False`.

* Anonymous events cannot be decoded. Use the `allow_undecoded` kwarg when calling `decode_logs` and `decode_trace` to receive the undecoded log without raising an exception.

## Tests

To run the test suite:

```bash
$ tox
```

## Development

This project is still in development. Comments, questions, criticisms and pull requests are welcomed.

## License

This project is licensed under the [MIT license](LICENSE).
