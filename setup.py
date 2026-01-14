#!/usr/bin/python3

import platform
from pathlib import Path

from setuptools import find_packages, setup

this_directory = Path(__file__).parent
requirements = list(map(str.strip, (this_directory / "requirements.txt").read_text().splitlines()))

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
                "--disable-error-code=unused-ignore",
            ],
            group_name="eth_event",
        )


with open("README.md") as fh:
    long_description = fh.read()

setup(
    name="eth-event",
    version="1.4.6",  # do not edit directly, use bumpversion
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
    python_requires=">=3.10,<4",
    install_requires=requirements,
    classifiers=[
        "Development Status :: 5 - Production/Stable",
        "Intended Audience :: Developers",
        "Topic :: Software Development :: Build Tools",
        "License :: OSI Approved :: MIT License",
        "Programming Language :: Python :: 3",
        "Programming Language :: Python :: 3.10",
        "Programming Language :: Python :: 3.11",
        "Programming Language :: Python :: 3.12",
        "Programming Language :: Python :: 3.13",
        "Programming Language :: Python :: 3.14",
    ],
)
