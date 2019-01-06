#!/usr/bin/python3

from eth_abi import decode_abi, decode_single
from eth_hash.auto import keccak
from hexbytes import HexBytes


def _topic(name, inputs):
    return "0x" + keccak(
        "{}({})".format(name, ",".join(i['type'] for i in inputs)).encode()
    ).hex()


def get_topics(abi):
    """Generate encoded event topics from a contract ABI.

    Arguments:
    abi -- A standard contract ABI in list format

    Returns a dictionary in the following format:

    {'Event Name': "encoded bytes32 topic as a string"}

    """
    return dict((
        i['name'], _topic(i['name'], i['inputs'])
    ) for i in abi if i['type'] == "event" and not i['anonymous'])


def get_event_abi(abi):
    """Convert a normal ABI to a dictionary style ABI specific to events.

    Arguments:
    abi -- A standard contract ABI in list format

    Returns a dict in the following format:

    {'encoded bytes32 topic': {'name':"Event Name", 'inputs':[abi inputs]}}

    """
    events = [i for i in abi if i['type']=="event" and not i['anonymous']]
    return dict((
        _topic(i['name'], i['inputs']),
        {'name': i['name'], 'inputs': i['inputs']}
    ) for i in events)


def decode_event(event, abi):
    """Decode a transaction event.

    Arguments:
    event -- A single event from a transaction log.
    abi -- The contract event ABI. You can supply the specific
           event as a dict generated from get_event_abi() or
           the entire contract ABI.

    Returns a dictionary in the following format:

    {
        'name':"Event Name",
        'data':[{
            'name': "name of variable",
            'type': "data type",
            'value': "decoded value"
        }, ...]
    }

    """
    if type(abi) is list:
        key = event['topics'][0]
        if type(key) is HexBytes:
            key = key.hex()
        abi = get_event_abi(abi)[key]
    result = {'name': abi['name'], 'data': []}
    types = [
        i['type'] if i['type'] != "bytes" else "bytes[]"
        for i in abi['inputs'] if not i['indexed']
    ]
    if types and event['data'] == "0x":
        event['data'] += "0" * (len(types)*64)
    decoded = list(decode_abi(types, HexBytes(event['data'])))[::-1]
    topics = event['topics'][:0:-1]
    for i in abi['inputs']:
        if i['indexed']:
            value = decode_single(i['type'], HexBytes(topics.pop()))
        else:
            value = decoded.pop()
        if type(value) is bytes:
            value = "0x" + value.hex()
        result['data'].append({
            'name': i['name'],
            'type': i['type'],
            'value': value
        })
    return result
