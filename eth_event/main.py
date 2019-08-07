#!/usr/bin/python3

from eth_abi import decode_abi, decode_single
from eth_abi.exceptions import InsufficientDataBytes
from eth_hash.auto import keccak
from hexbytes import HexBytes


class ABIError(Exception):
    pass


class EventError(Exception):
    pass


class StructLogError(Exception):
    pass


def get_log_topic(event_abi):
    if not isinstance(event_abi, dict):
        raise TypeError("Must be a dictionary of the specific event's ABI")
    if event_abi['anonymous']:
        raise ABIError("Anonymous events do not have a topic")
    types = _params(event_abi['inputs'])
    key = f"{event_abi['name']}({','.join(types)})".encode()
    return "0x"+keccak(key).hex()


def get_topics(contract_abi):
    """Generate encoded event topics from a contract ABI.

    Arguments:
    contract_abi -- A standard contract ABI in list format

    Returns a dictionary in the following format:

    {'Event Name': "encoded bytes32 topic as a string"}

    """
    if not isinstance(contract_abi, list):
        raise TypeError("Must be an entire contract ABI as a list")
    try:
        return dict(
            (i['name'], get_log_topic(i)) for i in contract_abi if
            i['type'] == "event" and not i['anonymous']
        )
    except (KeyError, TypeError):
        raise ABIError("Malformed ABI")


def get_event_abi(contract_abi):
    """Convert a normal ABI to a dictionary style ABI specific to events.

    Arguments:
    contract_abi -- A standard contract ABI in list format

    Returns a dict in the following format:

    {'encoded bytes32 topic': {'name':"Event Name", 'inputs':[abi inputs]}}

    """
    try:
        events = [i for i in contract_abi if i['type'] == "event" and not i['anonymous']]
        return dict((
            get_log_topic(i),
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
    if isinstance(abi, list):
        try:
            key = _bytes_to_hex_string(event['topics'][0])
        except IndexError:
            raise EventError("Cannot decode anonymous event")
        except (KeyError, TypeError):
            raise EventError("Invalid event")
        abi = get_event_abi(abi)
        abi = abi[key]
    try:
        return {
            'name': abi['name'],
            'data': _decode(abi['inputs'], event['topics'][1:], event['data'])
        }
    except (KeyError, TypeError):
        raise EventError("Invalid event")


def decode_logs(logs, abi, skip_anonymous=True):
    """Decode a transaction event log.

    Arguments:
    logs -- A log of events from a transaction receipt.
    abi -- The contract ABI, as a regular ABI or a dict
           from get_event_abi()
    skip_anonymous -- If True, events with no topic will
                      be skipped instead of raising.

    Returns a list of event dictionaries.

    """
    if isinstance(abi, list):
        abi = get_event_abi(abi)
    result = []
    for i in logs:
        if not i['topics']:
            if not skip_anonymous:
                raise EventError("Cannot decode anonymous event")
            continue
        key = HexBytes(i['topics'][0]).hex()
        result.append(decode_event(i, abi[key]))
    return result


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
    if isinstance(abi, list):
        abi = get_event_abi(abi)
    if isinstance(trace, dict):
        trace = trace['result']['structLogs']
    events = []
    for log in (i for i in trace if i['op'].startswith("LOG")):
        try:
            offset = int(log['stack'][-1], 16) * 2
            length = int(log['stack'][-2], 16) * 2
            topic = "0x" + log['stack'][-3]
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


def _params(abi_params):
    types = []
    for i in abi_params:
        if i['type'] != "tuple":
            types.append(i['type'])
            continue
        types.append(f"({','.join(x for x in _params(i['components']))})")
    return types


def _decode(inputs, topics, data):
    try:
        types = _params(i for i in inputs if not i['indexed'])
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
        if 'components' in i:
            result[-1]['components'] = i['components']
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
        value = _bytes_to_hex_string(value)
        result[-1].update({'value': value, 'decoded': True})
    return result


def _bytes_to_hex_string(value):
    if isinstance(value, bytes):
        value = value.hex()
        if not value.startswith('0x'):
            value = "0x" + value
    return value
