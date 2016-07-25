#include "eor_arduino_compat.hpp"

extern "C" void __cxa_pure_virtual() { while (1); }

extern "C" uint8_t pgm_read_byte(uint8_t *address)
{
	(void) address;
	return 0;
}

Print::Print()
{

}

void Print::print(char *s)
{
}
