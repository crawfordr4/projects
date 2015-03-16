README.txt

This repository is still in the process of being built. I'll let you know when it's fully ready. :-)

///////////////

Hello all!

This is an open source project I'm working on known as Ditto. 

Ditto is both a compiler and virtual machine, all built into an easy to use library. The compiler will be able to take any language for which it has a parser
(C, PHP, LOLCODE, etc...), and convert the code into an assembly language specific to the Ditto virtual machine. This code then gets written to a binary Ditto executable, where the code can be loaded into memory and executed whenever needed. The VM would also have the ability to simulate multi-threading and virtual memory. For languages like PHP, this could offer huge performance gains because not only would the code be reduced to a simple psuedo instruction set, but it would also be able to stay in memory for the duration of use of the device or software application. The core compiler will have all the tools necessary to enable programmers to add new language parser extensions with relative ease. The really cool thing about Ditto, though, is that with a set of parser extensions for a variety of languages, anyone can write an efficient program in nearly any language, compile it to run on the Ditto VM, and have the Ditto VM integrated with something like Apache, where the applications could run concurrently in memory, vastly improving response times. My hope is that this system could be used in a variety of cloud platforms to not only speed up the development process, but also to reduce energy use and promote a healthier environment.

