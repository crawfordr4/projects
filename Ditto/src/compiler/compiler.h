/*
Compiler Header File
*/

//Set up needed data types.
namespace __ditto_compiler{

	//This enumeration allows us to represent types with a familiar name.
	enum {
		BYTE,
		CHARACTER,
		UNSIGNED_SHORT,
		SHORT,
		UNSIGNED_INTEGER,
		INTEGER,
		UNSIGNED_LONG,
		LONG,
		UNSIGNED_FLOAT,
		FLOAT,
		DOUBLE,
		LONG_DOUBLE,
		POINTER
	};

    enum {
        BYTESIZE = 1,
        CHARACTER_SIZE = 1,
        UNSIGNED_SHORT_SIZE = 2,
        SHORT_SIZE = 2,
        UNSIGNED_INTEGER_SIZE = 4,
        INTEGER_SIZE = 4,
        UNSIGNED_LONG_SIZE = 8,
        LONG_SIZE = 8,
        UNSIGNED_FLOAT_SIZE = 4,
        FLOAT_SIZE = 4,
        DOUBLE_SIZE = 8,
        LONG_DOUBLE_SIZE = 16,
        POINTER_SIZE = 8
    };
	
	typedef unsigned char byte;
};


#include <stdlib.h>
#include <iostream>
#include "base/errorParser.cpp"
#include "base/errorType.cpp"
#include "base/tools.cpp"
#include "base/dataPool.cpp"
//#include "base/dataHash.cpp"
#include "base/functionHash.cpp"
#include "base/locationStack.cpp"
