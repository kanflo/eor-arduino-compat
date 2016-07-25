
#include <stdint.h>
#include <stdbool.h>

#include "SPI.hpp"

extern "C" {
	#include <stdio.h>
}

SPIc::SPIc()
{
	printf("[SPIc::SPIc]\n");
}

void SPIc::begin()
{
	printf("[SPIc::begin]\n");
}

void SPIc::setBitOrder(int order)
{
	printf("[SPIc::setBitOrder(%d)]\n", order);
}

void SPIc::setDataMode(int mode)
{
	printf("[SPIc::setDataMode(%d)]\n", mode);
}

void SPIc::setClockDivider(int div)
{
	printf("[SPIc::setClockDivider(%d)]\n", div);
}

uint8_t SPIc::transfer(uint8_t data)
{
	return spi_transfer_8(1, data);
}
