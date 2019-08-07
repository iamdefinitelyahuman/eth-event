#!/usr/bin/python3

from setuptools import setup, find_packages

with open("README.md", "r") as fh:
    long_description = fh.read()

setup(
    name='eth_event',
    packages=find_packages(),
    version='0.2.1',
    license='MIT',
    description='Ethereum event decoder and topic generator',
    long_description=long_description,
    long_description_content_type="text/markdown",
    author='Benjamin Hauser',
    author_email='b.hauser@zerolaw.tech',
    url='https://github.com/iamdefinitelyahuman/eth-event',
    keywords=['ethereum'],
    install_requires=[
        'eth-abi>=2.0.0,<3.0.0',
        'eth-hash[pycryptodome]>=0.2.0,<1.0.0',
        'hexbytes>=0.2.0,<1.0.0'
    ],
    classifiers=[
        'Development Status :: 3 - Alpha',
        'Intended Audience :: Developers',
        'Topic :: Software Development :: Build Tools',
        'License :: OSI Approved :: MIT License',
        'Programming Language :: Python :: 3',
        'Programming Language :: Python :: 3.6',
        "Programming Language :: Python :: 3.7"
    ],
)
