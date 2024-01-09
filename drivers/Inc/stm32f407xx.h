/*
 * stm32f407xx.h
 *
 *  Created on: Jan 8, 2024
 *      Author: Kyl Justin Perez
 */

#ifndef INC_STM32F407XX_H_
#define INC_STM32F407XX_H_

/* Define the base addresses of the Flash and SRAM memories */
#define FLASH_BASEADDR (0x08000000U)
#define SRAM1_BASEADDR (0x20000000U)
#define SRAM2_BASEADDR (0x2001C000U)
#define ROM (0x1FFF0000U) // Also known as system memory
#define SRAM (SRAM1_BASEADDR)

#endif /* INC_STM32F407XX_H_ */
