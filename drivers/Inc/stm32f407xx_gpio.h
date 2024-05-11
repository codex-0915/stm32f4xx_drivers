/***************************************************************************************************
 * 
 * @file   stm32f407xx_gpio.h
 * @brief  Contains all STM32F407xx GPIO macros and definitions
 *
 * @author Kyl Justin Perez
 * @date   May 11, 2024
 *
 ***************************************************************************************************/

#ifndef INC_STM32F407XX_GPIO_H_
#define INC_STM32F407XX_GPIO_H_

/***************************************************************************************************/
/******************************************* Include Files *****************************************/
/***************************************************************************************************/

#include "stm32f407xx.h"

/***************************************************************************************************/
/********************************************* Definitions *****************************************/
/***************************************************************************************************/

/* Configuration structure for a GPIO pin */
typedef struct
{
    uint8_t GPIO_PinNumber;
    uint8_t GPIO_PinMode;
    uint8_t GPIO_PinSpeed;
    uint8_t GPIO_PinPuPdControl;
    uint8_t GPIO_PinOPType;
    uint8_t GPIO_PinAltFunMode;
} GPIO_PinConfig_t;

/* Handle Structure for a GPIO pin*/
typedef struct
{
    GPIO_RegDef_t *pGPIOx;          /* Base address of the GPIO port to which the pin belongs */
    GPIO_PinConfig_t GPIO_PinCfg;   /* GPIO pin configuration settings */
} GPIO_Handle_t;


/***************************************************************************************************/
/********************************************** Prototypes *****************************************/
/***************************************************************************************************/

#endif /* INC_STM32F407XX_GPIO_H_ */
