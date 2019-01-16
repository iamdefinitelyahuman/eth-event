#!/usr/bin/python3

from eth_abi import decode_abi, decode_single
from eth_abi.exceptions import InsufficientDataBytes
from eth_hash.auto import keccak
from hexbytes import HexBytes


class ABIError(Exception): pass
class EventError(Exception): pass
class StructLogError(Exception): pass

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
    try:
        return dict((
            i['name'], _topic(i['name'], i['inputs'])
        ) for i in abi if i['type'] == "event" and not i['anonymous'])
    except (KeyError, TypeError):
        raise ABIError("Invalid ABI")


def get_event_abi(abi):
    """Convert a normal ABI to a dictionary style ABI specific to events.

    Arguments:
    abi -- A standard contract ABI in list format

    Returns a dict in the following format:

    {'encoded bytes32 topic': {'name':"Event Name", 'inputs':[abi inputs]}}

    """
    try:
        events = [i for i in abi if i['type']=="event" and not i['anonymous']]
        return dict((
            _topic(i['name'], i['inputs']),
            {'name': i['name'], 'inputs': i['inputs']}
        ) for i in events)
    except (KeyError, TypeError):
        raise ABIError("Invalid ABI")

def decode_event(event, abi):
    """Decode a transaction event.

    Arguments:
    event -- A single event from a transaction log.
    abi -- The contract event ABI. You can supply the specific
           event as a dict generated from get_event_abi() or
           the entire contract ABI.

    Indexed arrays cannot be decoded and so the returned value will still
    be encoded.
    
    Returns a dictionary in the following format:

    {
        'name':"Event Name",
        'data':[{
            'name': "name of variable",
            'type': "data type",
            'value': "decoded value",
            'decoded': True/False
        }, ...]
    }

    """
    if type(abi) is list:
        try:
            key = event['topics'][0]
        except IndexError:
            raise EventError("Cannot decode anonymous event")
        except (KeyError, TypeError):
            raise EventError("Invalid event")
        if type(key) is HexBytes:
            key = key.hex()
        abi = get_event_abi(abi)[key]
    try:
        return {
            'name':abi['name'],
            'data':_decode(abi['inputs'], event['topics'][1:], event['data'])
        }
    except (KeyError, TypeError):
        raise EventError("Invalid event")


def decode_logs(logs, abi):
    """Decode a transaction event log.

    Arguments:
    logs -- A log of events from a transaction receipt.
    abi -- The contract ABI, as a regular ABI or a dict
           from get_event_abi()

    Returns a list of event dictionaries.

    """
    if type(abi) is list:
        abi = get_event_abi(abi)
    return [decode_event(i, abi[HexBytes(i.topics[0]).hex()]) for i in logs]


def decode_trace(trace, abi):
    """Decode transaction events from a debug_traceTransaction
    structLog. Useful when you require the events for a transaction
    that reverted.

    Arguments:
    trace -- structLog list from a debug_traceTransaction RPC call
    abi -- The contract ABI, as a regular ABI or a dict
           from get_event_abi()

    Returns a list of event dictionaries.

    """
    if type(abi) is list:
        abi = get_event_abi(abi)
    try:
        trace = [i for i in trace if "LOG" in i['op']]
    except (IndexError, KeyError, TypeError):
        raise StructLogError("Invalid StructLog")
    events = []
    for log in trace:
        try:
            topic = "0x"+log['stack'][-3]
            offset = int(log['stack'][-1], 16) * 2
            length = int(log['stack'][-1], 16) * 2
        except KeyError:
            raise StructLogError("StructLog has no stack")
        except (IndexError, TypeError):
            raise StructLogError("Malformed stack")
        try:
            data = "".join(log['memory'])[offset:offset+length]
        except (KeyError, TypeError):
            raise StructLogError("Malformed memory")
        result = {
            'name': abi[topic]['name'],
            'data': _decode(abi[topic]['inputs'], log['stack'][-4::-1], data)
        }
        events.append(result)
    return events


def _decode(inputs, topics, data):
    try:
        types = [
            i['type'] if i['type'] != "bytes" else "bytes[]"
            for i in inputs if not i['indexed']
        ]
    except (KeyError, TypeError):
        raise ABIError("Invalid ABI")
    if types and data == "0x":
        data += "0" * (len(types)*64)
    try:
        decoded = list(decode_abi(types, HexBytes(data)))[::-1]
    except InsufficientDataBytes:
        raise EventError("Insufficient event data")
    except OverflowError:
        raise EventError("Cannot decode event due to overflow error")
    topics = topics[::-1]
    result = []
    for i in inputs:
        result.append({'name': i['name'], 'type': i['type']})
        if i['indexed']:
            try:
                value = HexBytes(topics.pop())
            except IndexError:
                raise EventError("Insufficient event data")
            try:
                value = decode_single(i['type'], HexBytes(value))
            except (InsufficientDataBytes, OverflowError):
                result[-1].update({'value': value.hex(), 'decoded': False}) 
                continue
        else:
            value = decoded.pop()
            if i['type'] == "string":
                value = HexBytes(value).decode('utf-8')
        if type(value) is HexBytes:
            value = value.hex()
        result[-1].update({'value': value, 'decoded': True})
    return result