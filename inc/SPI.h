/*
 * SPI.h
 *
 *  Created on: 2016��5��21��
 *      Author: Romeli
 *		Used Pin:   |  PA5-SPI1_SCK   |
 *					|  PA6-SPI1_MISO  |
 *					|  PA7-SPI1_MOSI  |
 */

#ifndef SPI_H_
#define SPI_H_

#include "stm32f10x.h"

#define SPI_CH SPI2
//#define USE_SPI1
#define USE_SPI2

#define SPI_Speed SPI_Speed_2_25M		//only on SPI1

#ifdef USE_SPI1
#define SPI_Speed_18M SPI_BaudRatePrescaler_4
#define SPI_Speed_9M SPI_BaudRatePrescaler_8
#define SPI_Speed_4_5M SPI_BaudRatePrescaler_16
#define SPI_Speed_2_25M SPI_BaudRatePrescaler_32
#define SPI_Speed_1_125M SPI_BaudRatePrescaler_64
#define SPI_Speed_562_5K SPI_BaudRatePrescaler_128
#define SPI_Speed_281_25K SPI_BaudRatePrescaler_256
#else
#define SPI_Speed_18M SPI_BaudRatePrescaler_2
#define SPI_Speed_9M SPI_BaudRatePrescaler_4
#define SPI_Speed_4_5M SPI_BaudRatePrescaler_8
#define SPI_Speed_2_25M SPI_BaudRatePrescaler_16
#define SPI_Speed_1_125M SPI_BaudRatePrescaler_32
#define SPI_Speed_562_5K SPI_BaudRatePrescaler_64
#define SPI_Speed_281_25K SPI_BaudRatePrescaler_128
#endif

class SPIClass {
public:
	void Init();
	uint8_t transfer(uint8_t data);
};

void SPI_GPIO_Init();

extern SPIClass SPI;

#endif /* SPI_H_ */
