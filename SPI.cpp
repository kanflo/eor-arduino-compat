#include <stdint.h>
#include <stdbool.h>
#include "SPI.hpp"

SPIc::SPIc()
{
}

void SPIc::begin()
{
}

void SPIc::setBitOrder(int order)
{
	(void) order;
}

void SPIc::setDataMode(int mode)
{
	(void) mode;
}

void SPIc::setClockDivider(int div)
{
	(void) div;
}

uint8_t SPIc::transfer(uint8_t data)
{
	return spi_transfer_8(1, data);
}
