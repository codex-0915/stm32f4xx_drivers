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

/* Base addresses of peripherals which are hanging on AHB1 bus */
#define GPIOA_BASEADDR (AHB1PERIPH_BASEADDR + 0X0000)
#define GPIOB_BASEADDR (AHB1PERIPH_BASEADDR + 0X0400)
#define GPIOC_BASEADDR (AHB1PERIPH_BASEADDR + 0X0800)
#define GPIOD_BASEADDR (AHB1PERIPH_BASEADDR + 0X0C00)
#define GPIOE_BASEADDR (AHB1PERIPH_BASEADDR + 0X1000)
#define GPIOF_BASEADDR (AHB1PERIPH_BASEADDR + 0X1400)
#define GPIOG_BASEADDR (AHB1PERIPH_BASEADDR + 0X1800)
#define GPIOH_BASEADDR (AHB1PERIPH_BASEADDR + 0X1C00)
#define GPIOI_BASEADDR (AHB1PERIPH_BASEADDR + 0X2000)
#define GPIOJ_BASEADDR (AHB1PERIPH_BASEADDR + 0X2400)
#define GPIOK_BASEADDR (AHB1PERIPH_BASEADDR + 0X2800)

/* Base addresses of peripherals which are hanging on APB1 bus */
#define I2C1_BASEADDR (APB1PERIPH_BASEADDR + 0X5400)
#define I2C2_BASEADDR (APB1PERIPH_BASEADDR + 0X5800)
#define I2C3_BASEADDR (APB1PERIPH_BASEADDR + 0X5C00)
#define SPI2_BASEADDR (APB1PERIPH_BASEADDR + 0X3800)
#define SPI3_BASEADDR (APB1PERIPH_BASEADDR + 0X3C00)
#define USART2_BASEADDR (APB1PERIPH_BASEADDR + 0X4400)
#define USART3_BASEADDR (APB1PERIPH_BASEADDR + 0X4800)
#define UART4_BASEADDR (APB1PERIPH_BASEADDR + 0X4C00)
#define UART5_BASEADDR (APB1PERIPH_BASEADDR + 0X5000)

#endif /* INC_STM32F407XX_H_ */
