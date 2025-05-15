#!/usr/bin/python3

import platform
from setuptools import setup, find_packages


if platform.python_implementation() != "CPython":
    # We only compile this library for CPython, other implementations will use it as normal interpreted python code
    ext_modules = []
else:
    try:
        from mypyc.build import mypycify
    except ImportError:
        ext_modules = []
    else:
        ext_modules = mypycify(
            [
                "eth_event/__init__.py",
                "eth_event/main.py",
                "--strict",
                "--pretty",
                "--disable-error-code=attr-defined",
                "--disable-error-code=typeddict-unknown-key",
                "--disable-error-code=unused-ignore",
            ],
        )


with open("README.md", "r") as fh:
    long_description = fh.read()

setup(
    name="eth-event",
    version="1.3.0",  # do not edit directly, use bumpversion
    license="MIT",
    description="Ethereum event decoder and topic generator",
    long_description=long_description,
    long_description_content_type="text/markdown",
    author="Benjamin Hauser",
    author_email="ben@hauser.id",
    url="https://github.com/iamdefinitelyahuman/eth-event",
    include_package_data=True,
    py_modules=["eth_event"],
    ext_modules=ext_modules,
    zip_safe=False,
    keywords=["ethereum"],
    packages=find_packages(exclude=["tests", "tests.*"]),
    package_data={"eth_event": ["py.typed"]},
    python_requires=">=3.8,<4",
    install_requires=[
        "cchecksum>=0.2.6,<0.3",
        "eth-abi>=4,<6",
        "eth-hash[pycryptodome]>=0.2.0,<1.0.0",
        "hexbytes>=1,<2",
    ],
    classifiers=[
        "Development Status :: 3 - Alpha",
        "Intended Audience :: Developers",
        "Topic :: Software Development :: Build Tools",
        "License :: OSI Approved :: MIT License",
        "Programming Language :: Python :: 3",
    ],
)
