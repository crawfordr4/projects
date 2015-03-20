#include <iostream>
#include <testZone/dataPool.cpp>

int main(){
    
    //Test cases for static memory code.
	__ditto_compiler::staticMemPool staticMem;
    staticMem.setup(1024);

    //Set up test data...
    char testChar = 'a';
    char* testString = "Meet me in the library at 10pm.";
    
    //Signed
    short testShort[] = {0,1,2,-3,4,5,6,7,8,-9,10,11,12};
    int testInt[] = {345,12,-3456,847573,2,0,-13567};
    long testLong[] = {48563245,-49684986,2344566};

    //Unsigned
    unsigned short testUShort[] = {0,1,2,3,4,5,6,7,8,9};
    unsigned int testUInt[] = {345,12,3456,847573,2,0,13567};
    unsigned long testULong[] = {48563245,49684986,2344566};
    
    //Allocate items...
    long charLocation = allocateChar(1,1,&testChar);
    long stringLocation = allocateString(50,31,testString);
    long shortLocation = allocateShort(13,13,testShort);
    long intLocation = allocateInt(7,7,testInt);
    
	return 1;
}
