compile:
	mypyc eth_event/__init__.py eth_event/main.py --strict --pretty --disable-error-code=attr-defined --disable-error-code=typeddict-unknown-key --disable-error-code=unused-ignore