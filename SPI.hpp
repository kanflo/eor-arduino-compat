#ifndef __SPI_COMPAT__
#define __SPI_COMPAT__

extern "C" {
	#include <esp/spi.h>
}

#define MSBFIRST 1

class SPIc {
	public:
		SPIc();
		static void begin();
		static void setBitOrder(int order);
		static void setDataMode(int mode);
		static void setClockDivider(int div);
		static uint8_t transfer(uint8_t data);
};

#endif // __SPI_COMPAT__
