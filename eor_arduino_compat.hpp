#ifndef __EOR_ARDUINO_COMPAT_H__
#define __EOR_ARDUINO_COMPAT_H__

#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <FreeRTOS.h>
#include <task.h>
#include <SPI.hpp>

#define boolean bool
#ifndef NULL
 #define NULL 0
#endif

#define ESP8266

#define __FlashStringHelper char
#define PROGMEM

#define HIGH true
#define LOW false
#define digitalWrite(pin, value) gpio_write(pin, value)
#define digitalRead(pin) gpio_read(pin)

#define OUTPUT GPIO_OUTPUT
#define INPUT GPIO_INPUT
#define pinMode(pin, mode) gpio_enable(pin, mode)

#define delay(ms) vTaskDelay(ms / portTICK_PERIOD_MS)

extern "C" uint8_t pgm_read_byte(uint8_t *address);

class Print {
	public:
		Print();
		void print(char *s);
		void println(char *s);
		virtual void writec(uint8_t c);
};

#endif // __EOR_ARDUINO_COMPAT_H__