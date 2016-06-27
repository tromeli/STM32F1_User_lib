/*
 * I2C.h
 *
 *  Created on: 2016��2��7��
 *      Author: Romeli
 *      Used Pin: 	|  PB6-I2C1_SCL	  |
 *          		|  PB7-I2C1_SDA   |
 */

#ifndef I2C_H_
#define I2C_H_

#include "stm32f10x.h"

#define SlaveAddress 0x44

#define I2C_Speed 200000

void I2C_GPIO_Init();

class I2C
{
public:
	static void init();
	static void send(uint8_t D_Add, uint8_t data);
	static void send(uint8_t D_Add, uint8_t W_Add, uint8_t data);
	static void send(uint8_t D_Add, uint8_t *dataBuf, uint8_t size);
	static void send(uint8_t D_Add, uint8_t W_Add, uint8_t *dataBuf,
			uint8_t size);
	static uint8_t receive(uint8_t D_Add);
	static uint8_t receive(uint8_t D_Add, uint8_t R_Add);
	static void  receive(uint8_t D_Add, uint8_t *dataBuf, uint8_t size);
	static void receive(uint8_t D_Add, uint8_t R_Add, uint8_t *dataBuf,
			uint8_t size);
};

#endif /* I2C_H_ */
