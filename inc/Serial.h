/*
 * Serial.h
 *
 *  Created on: 2016��1��18��
 *      Author: Romeli
 *      Version: V1.0
 */

#ifndef SERIAL_H_
#define SERIAL_H_

#include "stm32f10x.h"

class SerialClass
{
public:
	void begin(uint32_t BaudRate);
	void print(char *data);
	void print(long data);
	void print(double data, uint8_t ndigit);

	inline void print(char data)
	{
		print((long) data);
	}
	inline void print(int data)
	{
		print((long) data);
	}
	inline void print(float data, uint8_t ndigit)
	{
		print((double) data, ndigit);
	}
	inline void println(char *data)
	{
		print(data);
	}
	inline void println(long data)
	{
		print(data);
	}
	inline void println(char data)
	{
		print(data);
	}
	inline void println(int data)
	{
		print(data);
	}
	inline void println(float data, uint8_t ndigit)
	{
		print(data, ndigit);
	}
	inline void println(double data, uint8_t ndigit)
	{
		print(data, ndigit);
	}

	void write(char c);
	uint8_t available();
	uint8_t checkFrame();
	char read();
	void read(char *buf, uint8_t len);
private:
};

extern SerialClass Serial;
#endif /* SERIAL_H_ */
