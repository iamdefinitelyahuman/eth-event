#!/usr/bin/python3

from setuptools import setup, find_packages

with open("README.md", "r") as fh:
    long_description = fh.read()

setup(
    name="eth-event",
    version="1.2.0",  # do not edit directly, use bumpversion
    license="MIT",
    description="Ethereum event decoder and topic generator",
    long_description=long_description,
    long_description_content_type="text/markdown",
    author="Benjamin Hauser",
    author_email="ben@hauser.id",
    url="https://github.com/iamdefinitelyahuman/eth-event",
    include_package_data=True,
    py_modules=["eth_event"],
    setup_requires=[],
    zip_safe=False,
    keywords=["ethereum"],
    packages=find_packages(exclude=["tests", "tests.*"]),
    python_requires=">=3.6, <4",
    install_requires=[
        "eth-abi>=2.0.0,<3.0.0",
        "eth-hash[pycryptodome]>=0.2.0,<1.0.0",
        "eth-utils>=1.2.0,<2.0.0",
        "hexbytes>=0.2.0,<1.0.0",
    ],
    classifiers=[
        "Development Status :: 3 - Alpha",
        "Intended Audience :: Developers",
        "Topic :: Software Development :: Build Tools",
        "License :: OSI Approved :: MIT License",
        "Programming Language :: Python :: 3",
        "Programming Language :: Python :: 3.6",
        "Programming Language :: Python :: 3.7",
        "Programming Language :: Python :: 3.8",
    ],
)
