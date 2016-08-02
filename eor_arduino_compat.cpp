#include "eor_arduino_compat.hpp"

extern "C" void __cxa_pure_virtual() { while (1); }

extern "C" uint8_t pgm_read_byte(uint8_t *address)
{
	(void) address;
	return 0;
}

extern "C" {
	#include <stdio.h>
}

Print::Print()
{

}

void Print::print(char *s)
{
	do {
		writec(*s++);
	} while(*s);
}

void Print::println(char *s)
{
	print(s);
	writec('\n');
}

void Print::writec(uint8_t c)
{
	printf("ERROR: Should not end up in Print::write\n");
}
