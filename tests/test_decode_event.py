#!/usr/bin/python3

from eth_event import decode_event, decode_logs


def test_decode_event(log, abi):
    decode_event(log, abi)


def test_decode_logs(log, abi):
    decode_logs([log, log], abi)
