#!/usr/bin/env python
"""
setup.py file for SWIG example
"""

from distutils.core import setup, Extension
example_module = Extension('_Example',sources=['example_wrap.cxx', 'file1.cpp'],)

setup(name = 'Example',
       version = '0.1',
       author = "SWIG Docs",
       description = """Simple swig example from docs""",
       ext_modules = [example_module],
       py_modules = ["Example"]
)
