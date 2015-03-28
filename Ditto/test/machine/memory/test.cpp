#include "memTest.h"

/*
This file is used to test the __ditto_machine_memory::memory class, which is responsible for the virtual machine's memory.

=================
FUNCTIONS TO TEST
=================

__ditto_machine::memory::setup()					 | This function performs the initial set up of the virtual RAM object.

__ditto_machine::memory::setSize(long size) 	     | This function sets the size of the virtual machine's virtual RAM.

__ditto_machine::memory::resize(long size)           | This function resizes the virtual machine's virtual RAM.

__ditto_machine::memory::getSize()                   | This function returns a long value which indicates the current size of virtual RAM.

__ditto_machine::memory::getUsage()		             | This function returns a long value which indicates the amount of memory currently being used.

__ditto_machine::memory::flush()			   		 | This function flushes all of the virtual RAM.

__ditto_machine::memory::put(long index, byte data)	 | This function places a piece of data into the specified index of virtual RAM.

__ditto_machine::memory::get(long index, byte* data) | This function sets a pointer to the data located at the given index.

*/


class testMemory{
public:
	__ditto_machine::memory *memoryObj;

	void objectSetup(){
		//I prefer using malloc. It's more entertaining.
		memoryObj = (__ditto_machine::memory*)malloc(sizeof(__ditto_machine::memory));
	}

	void testSetup(){
		memoryObj->setup();
	}

	void freeEverything(){
		free(memoryObj);
	}
};


int main(int argc, char* argv[]){
	std::cout << "\nHello World!\n";
	return 1;
}