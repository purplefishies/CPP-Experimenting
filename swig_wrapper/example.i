/* File: example.i */
%module Example

%{
#define SWIG_FILE_WITH_INIT
#include "file1.h"
%}

%include "file1.h"



