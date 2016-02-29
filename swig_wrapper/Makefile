#
# Simple makefile for building C++ and Python
#

clean:
	$(RM) *.pyc
	$(RM) -rf build
	$(RM) *_wrap.cxx

module:	
	swig -c++ -python example.i
	python setup.py build


test:	module
	PYTHONPATH=${PWD}/build/lib.linux-x86_64-2.7 python -c 'from Example import *; print fact(23)'
