from typing import Type


try:
    from eth_abi.exceptions import InvalidPointer
except ImportError:
    # Define a stub exception for older eth-abi versions
    InvalidPointer: Type[Exception] = type("InvalidPointer", (Exception,), {})


__all__ = ["InvalidPointer"]
