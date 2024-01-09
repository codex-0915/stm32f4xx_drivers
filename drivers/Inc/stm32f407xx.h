/*
 * stm32f407xx.h
 *
 *  Created on: Jan 8, 2024
 *      Author: Kyl Justin Perez
 */

#ifndef INC_STM32F407XX_H_
#define INC_STM32F407XX_H_

/* Defining the base addresses of the Flash and SRAM memories */
#define FLASH_BASEADDR (0x08000000U)
#define SRAM1_BASEADDR (0x20000000U)
#define SRAM2_BASEADDR (0x2001C000U)
#define ROM (0x1FFF0000U) // Also known as system memory
#define SRAM (SRAM1_BASEADDR)

/* Defining base addresses of different bus domains */
#define PERIPH_BASEADDR (0X40000000U)
#define APB1PERIPH_BASEADDR (PERIPH_BASEADDR)
#define APB2PERIPH_BASEADDR (0X40010000U)
#define AHB1PERIPH_BASEADDR (0X40020000U)
#define AHB2PERIPH_BASEADDR (0X50000000U)

#endif /* INC_STM32F407XX_H_ */
