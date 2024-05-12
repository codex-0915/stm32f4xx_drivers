/***************************************************************************************************
 * 
 * @file   stm32f407xx.h
 * @brief  Contains all STM32F407xx macros and definitions
 *
 * @author Kyl Justin Perez
 * @date   January 8, 2024
 *
 ***************************************************************************************************/

#ifndef INC_STM32F407XX_H_
#define INC_STM32F407XX_H_

/***************************************************************************************************/
/******************************************* Include Files *****************************************/
/***************************************************************************************************/

#include <stdint.h>

/***************************************************************************************************/
/********************************************* Definitions *****************************************/
/***************************************************************************************************/

#define __vo volatile

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
#define RCC_BASEADDR (AHB1PERIPH_BASEADDR + 0x3800)

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

/* Base addresses of peripherals which are hanging on APB2 bus */
#define EXT1_BASEADDR (APB2PERIPH_BASEADDR + 0X3C00)
#define SPI1_BASEADDR (APB2PERIPH_BASEADDR + 0X3000)
#define SPI4_BASEADDR (APB2PERIPH_BASEADDR + 0X3400)
#define USART1_BASEADDR (APB2PERIPH_BASEADDR + 0X1000)
#define USART6_BASEADDR (APB2PERIPH_BASEADDR + 0X1400)
#define SYSCFG_BASEADDR (APB2PERIPH_BASEADDR + 0X3800)


/* Peripheral Register Definition Structures */

/*
 * Note : Registers of a peripheral are specific to MCU
 * e.g. : Number of Registers of SPI peripheral of STM32F4x family's MCU may be different (more or less)
 * Compare the number of registers of SPI peripherals of STM32Lx or STM32F0x family of MCUs
 * Please check your device Reference Manual
 *
 */

/* Peripheral register definition structure for GPIO */
typedef struct
{
	__vo uint32_t MODER;    /*!< GPIO port mode register,				Address offset: 0x00 */
	__vo uint32_t OTYPER;   /*!< TODO: Add a short description,			Address offset:  */
	__vo uint32_t OSPEEDR;  /*!< TODO: Add a short description,			Address offset:  */
	__vo uint32_t PUPDR;    /*!< TODO: Add a short description,			Address offset:  */
	__vo uint32_t IDR;      /*!< TODO: Add a short description,			Address offset:  */
	__vo uint32_t ODR;      /*!< TODO: Add a short description,			Address offset:  */
	__vo uint32_t BSSR;     /*!< TODO: Add a short description,			Address offset:  */
	__vo uint32_t LCKR;     /*!< TODO: Add a short description,			Address offset:  */
	__vo uint32_t AFR[2];   /*!< TODO: Add a short description,			Address offset:  */
} GPIO_RegDef_t;

/* Peripheral register definition structure for RCC */
typedef struct
{
	__vo uint32_t CR;    			/*!< RCC clock control register,			Address offset: 0x00 */
	__vo uint32_t PLLCFGR;   		/*!< RCC PLL configuration register,		Address offset: 0x04 */
	__vo uint32_t CFGR;  			/*!< RCC clock configuration register,		Address offset: 0x08 */
	__vo uint32_t CIR;    			/*!< TODO: Add a short description,			Address offset:  */
	__vo uint32_t AHB1RSTR;      	/*!< TODO: Add a short description,			Address offset:  */
	__vo uint32_t AHB2RSTR;      	/*!< TODO: Add a short description,			Address offset:  */
	__vo uint32_t AHB3RSTR;     	/*!< TODO: Add a short description,			Address offset:  */
		 uint32_t RESERVED0;     	/*!< TODO: Add a short description,			Address offset:  */
	__vo uint32_t APB1RSTR;   		/*!< TODO: Add a short description,			Address offset:  */
	__vo uint32_t APB2RSTR;   		/*!< TODO: Add a short description,			Address offset:  */
		 uint32_t RESERVED1[2];     /*!< TODO: Add a short description,			Address offset:  */
	__vo uint32_t AHB1ENR;   		/*!< TODO: Add a short description,			Address offset:  */
	__vo uint32_t AHB2ENR;   		/*!< TODO: Add a short description,			Address offset:  */
	__vo uint32_t AHB3ENR;   		/*!< TODO: Add a short description,			Address offset:  */
		 uint32_t RESERVED2;     	/*!< TODO: Add a short description,			Address offset:  */
	__vo uint32_t APB1ENR;   		/*!< TODO: Add a short description,			Address offset:  */
	__vo uint32_t APB2ENR;   		/*!< TODO: Add a short description,			Address offset:  */
		 uint32_t RESERVED3[2];     /*!< TODO: Add a short description,			Address offset:  */
	__vo uint32_t AHB1LPENR;   		/*!< TODO: Add a short description,			Address offset:  */
	__vo uint32_t AHB2LPENR;   		/*!< TODO: Add a short description,			Address offset:  */
	__vo uint32_t AHB3LPENR;   		/*!< TODO: Add a short description,			Address offset:  */
		 uint32_t RESERVED4;     	/*!< TODO: Add a short description,			Address offset:  */
	__vo uint32_t APB1LPENR;   		/*!< TODO: Add a short description,			Address offset:  */
	__vo uint32_t APB2LPENR;   		/*!< TODO: Add a short description,			Address offset:  */
		 uint32_t RESERVED5[2];     /*!< TODO: Add a short description,			Address offset:  */
	__vo uint32_t BDCR;   			/*!< TODO: Add a short description,			Address offset:  */
	__vo uint32_t CSR;   			/*!< TODO: Add a short description,			Address offset:  */
		 uint32_t RESERVED6[2];     /*!< TODO: Add a short description,			Address offset:  */
	__vo uint32_t SSCGR;   			/*!< TODO: Add a short description,			Address offset:  */
	__vo uint32_t PLLI2SCFGR;   	/*!< TODO: Add a short description,			Address offset:  */
} RCC_RegDef_t;


/* Peripheral Definitions (peripheral base addresses typecasted to xx_RegDef_t) */
#define GPIOA ((GPIO_RegDef_t *) GPIOA_BASEADDR);
#define GPIOB ((GPIO_RegDef_t *) GPIOB_BASEADDR);
#define GPIOC ((GPIO_RegDef_t *) GPIOC_BASEADDR);
#define GPIOD ((GPIO_RegDef_t *) GPIOD_BASEADDR);
#define GPIOE ((GPIO_RegDef_t *) GPIOE_BASEADDR);
#define GPIOF ((GPIO_RegDef_t *) GPIOF_BASEADDR);
#define GPIOG ((GPIO_RegDef_t *) GPIOG_BASEADDR);
#define GPIOH ((GPIO_RegDef_t *) GPIOH_BASEADDR);
#define GPIOI ((GPIO_RegDef_t *) GPIOI_BASEADDR);

#define RCC ((RCC_RegDef_t *) RCC_BASEADDR);

/* Clock Enable Macros for GPIOx peripherals */
#define GPIOA_PCLK_EN() ( RCC->AHB1ENR |= ( 1 << 0 ) )  // GPIOA peripheral clock enable
#define GPIOB_PCLK_EN() ( RCC->AHB1ENR |= ( 1 << 1 ) )  // GPIOB peripheral clock enable
#define GPIOC_PCLK_EN() ( RCC->AHB1ENR |= ( 1 << 2 ) )  // GPIOC peripheral clock enable
#define GPIOD_PCLK_EN() ( RCC->AHB1ENR |= ( 1 << 3 ) )  // GPIOD peripheral clock enable
#define GPIOE_PCLK_EN() ( RCC->AHB1ENR |= ( 1 << 4 ) )  // GPIOE peripheral clock enable
#define GPIOF_PCLK_EN() ( RCC->AHB1ENR |= ( 1 << 5 ) )  // GPIOF peripheral clock enable
#define GPIOG_PCLK_EN() ( RCC->AHB1ENR |= ( 1 << 6 ) )  // GPIOG peripheral clock enable
#define GPIOH_PCLK_EN() ( RCC->AHB1ENR |= ( 1 << 7 ) )  // GPIOH peripheral clock enable
#define GPIOI_PCLK_EN() ( RCC->AHB1ENR |= ( 1 << 8 ) )  // GPIOI peripheral clock enable
#define GPIOJ_PCLK_EN() ( RCC->AHB1ENR |= ( 1 << 9 ) )  // GPIOJ peripheral clock enable
#define GPIOK_PCLK_EN() ( RCC->AHB1ENR |= ( 1 << 10 ) ) // GPIOK peripheral clock enable

/* Clock Enable Macros for I2Cx peripherals */
#define I2C1_PCLK_EN() ( RCC->APB1ENR |= ( 1 << 21 ) ) // I2C1 peripheral clock enable
#define I2C2_PCLK_EN() ( RCC->APB1ENR |= ( 1 << 22 ) ) // I2C2 peripheral clock enable
#define I2C3_PCLK_EN() ( RCC->APB1ENR |= ( 1 << 23 ) ) // I2C3 peripheral clock enable

/* Clock Enable Macros for SPIx peripherals */
#define SPI1_PCLK_EN() ( RCC->APB2ENR |= ( 1 << 12 ) ) // SPI1 peripheral clock enable
#define SPI2_PCLK_EN() ( RCC->APB1ENR |= ( 1 << 14 ) ) // SPI2 peripheral clock enable
#define SPI3_PCLK_EN() ( RCC->APB1ENR |= ( 1 << 15 ) ) // SPI3 peripheral clock enable
// #define SPI4_PCLK_EN() ( RCC->APB2ENR |= ( 1 << 13 ) ) // SPI4 peripheral clock enable // double-check

/* Clock Enable Macros for USARTx peripherals */
#define USART1_PCLK_EN() ( RCC->APB2ENR |= ( 1 << 4 ) )  // USART1 peripheral clock enable
#define USART2_PCLK_EN() ( RCC->APB1ENR |= ( 1 << 17 ) ) // USART2 peripheral clock enable
#define USART3_PCLK_EN() ( RCC->APB1ENR |= ( 1 << 18 ) ) // USART3 peripheral clock enable
#define USART4_PCLK_EN() ( RCC->APB1ENR |= ( 1 << 19 ) ) // USART4 peripheral clock enable
#define USART5_PCLK_EN() ( RCC->APB1ENR |= ( 1 << 20 ) ) // USART5 peripheral clock enable
#define USART6_PCLK_EN() ( RCC->APB2ENR |= ( 1 << 5 ) )  // USART6 peripheral clock enable

/* Clock Enable Macros for SYSCFG peripherals */
#define SYSCFG_PCLK_EN() ( RCC->APB2ENR |= ( 1 << 14 ) )


/* Clock Disable Macros for GPIOx peripherals */
#define GPIOA_PCLK_DI() ( RCC->AHB1ENR &= ~( 1 << 0 ) )  // GPIOA peripheral clock disable
#define GPIOB_PCLK_DI() ( RCC->AHB1ENR &= ~( 1 << 1 ) )  // GPIOB peripheral clock disable
#define GPIOC_PCLK_DI() ( RCC->AHB1ENR &= ~( 1 << 2 ) )  // GPIOC peripheral clock disable
#define GPIOD_PCLK_DI() ( RCC->AHB1ENR &= ~( 1 << 3 ) )  // GPIOD peripheral clock disable
#define GPIOE_PCLK_DI() ( RCC->AHB1ENR &= ~( 1 << 4 ) )  // GPIOE peripheral clock disable
#define GPIOF_PCLK_DI() ( RCC->AHB1ENR &= ~( 1 << 5 ) )  // GPIOF peripheral clock disable
#define GPIOG_PCLK_DI() ( RCC->AHB1ENR &= ~( 1 << 6 ) )  // GPIOG peripheral clock disable
#define GPIOH_PCLK_DI() ( RCC->AHB1ENR &= ~( 1 << 7 ) )  // GPIOH peripheral clock disable
#define GPIOI_PCLK_DI() ( RCC->AHB1ENR &= ~( 1 << 8 ) )  // GPIOI peripheral clock disable
#define GPIOJ_PCLK_DI() ( RCC->AHB1ENR &= ~( 1 << 9 ) )  // GPIOJ peripheral clock disable
#define GPIOK_PCLK_DI() ( RCC->AHB1ENR &= ~( 1 << 10 ) ) // GPIOK peripheral clock disable

/* Clock Disable Macros for I2Cx peripherals */
#define I2C1_PCLK_DI() ( RCC->APB1ENR &= ~( 1 << 21 ) ) // I2C1 peripheral clock disable
#define I2C2_PCLK_DI() ( RCC->APB1ENR &= ~( 1 << 22 ) ) // I2C2 peripheral clock disable
#define I2C3_PCLK_DI() ( RCC->APB1ENR &= ~( 1 << 23 ) ) // I2C3 peripheral clock disable

/* Clock Disable Macros for SPIx peripherals */
#define SPI1_PCLK_DI() ( RCC->APB2ENR &= ~( 1 << 12 ) ) // SPI1 peripheral clock disable
#define SPI2_PCLK_DI() ( RCC->APB1ENR &= ~( 1 << 14 ) ) // SPI2 peripheral clock disable
#define SPI3_PCLK_DI() ( RCC->APB1ENR &= ~( 1 << 15 ) ) // SPI3 peripheral clock disable
// #define SPI4_PCLK_DI() ( RCC->APB2ENR &= ~( 1 << 13 ) ) // SPI4 peripheral clock disable // double-check

/* Clock Disable Macros for USARTx peripherals */
#define USART1_PCLK_DI() ( RCC->APB2ENR &= ~( 1 << 4 ) )  // USART1 peripheral clock disable
#define USART2_PCLK_DI() ( RCC->APB1ENR &= ~( 1 << 17 ) ) // USART2 peripheral clock disable
#define USART3_PCLK_DI() ( RCC->APB1ENR &= ~( 1 << 18 ) ) // USART3 peripheral clock disable
#define USART4_PCLK_DI() ( RCC->APB1ENR &= ~( 1 << 19 ) ) // USART4 peripheral clock disable
#define USART5_PCLK_DI() ( RCC->APB1ENR &= ~( 1 << 20 ) ) // USART5 peripheral clock disable
#define USART6_PCLK_DI() ( RCC->APB2ENR &= ~( 1 << 5 ) )  // USART6 peripheral clock disable

/* Clock Disable Macros for SYSCFG peripherals */
#define SYSCFG_PCLK_DI() ( RCC->APB2ENR &= ~( 1 << 14 ) )

/* Generic Macros */
#define ENABLE (1)
#define DISABLE (0)
#define SET (ENABLE)
#define RESET (DISABLE)

#endif /* INC_STM32F407XX_H_ */
