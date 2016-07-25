#include "eor_arduino_compat.hpp"

extern "C" void __cxa_pure_virtual() { while (1); }
extern "C" {
	#include <stdio.h>
}

Print::Print()
{

}

void Print::print(char *s)
{
	printf("[Print]\n");
}
