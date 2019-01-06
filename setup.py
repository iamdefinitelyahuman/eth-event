#!/usr/bin/python3

from setuptools import setup, find_packages

setup(
  name = 'eth_event',
  packages = find_packages(),
  version = '0.1.1',
  license = 'MIT',
  description = 'Ethereum event decoder and topic generator',
  author = 'Benjamin Hauser',
  author_email = 'ben.hauser@hyperlink.capital',
  url = 'https://github.com/iamdefinitelyahuman/eth-event',
  download_url = 'https://github.com/iamdefinitelyahuman/eth-event/archive/0.1.1.tar.gz',
  keywords = ['ethereum'],
  install_requires=[
          'eth-abi',
          'eth-hash',
          'hexbytes'
      ],
  classifiers=[
    'Development Status :: 3 - Alpha',
    'Intended Audience :: Developers',
    'Topic :: Software Development :: Build Tools',
    'License :: OSI Approved :: MIT License',
    'Programming Language :: Python :: 3',
    'Programming Language :: Python :: 3.5',
    'Programming Language :: Python :: 3.6',
  ],
) 
