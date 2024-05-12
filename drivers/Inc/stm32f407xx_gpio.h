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

/***************************************************************************************************
 *                                    APIs supported by this driver
 *       For more information about the APIs, check the function definitions / function headers
 ***************************************************************************************************/

/* Peripheral Clock Setup */
void GPIO_PeriClockControl(GPIO_RegDef_t *pGPIOx, uint8_t status);

/* GPIO Initialization and Deinitialization */
void GPIO_Init(GPIO_Handle_t *pGPIOHandle);
void GPIO_DeInit(GPIO_RegDef_t *pGPIOx);

/* Data Read and Write */
uint8_t GPIO_ReadFromInputPin(GPIO_RegDef_t *pGPIOx, uint8_t PinNumber);
uint16_t GPIO_ReadFromInputPort(GPIO_RegDef_t *pGPIOx);
void GPIO_WriteToInputPin(GPIO_RegDef_t *pGPIOx, uint8_t PinNumber, uint8_t Value);
void GPIO_WriteToOutputPort(GPIO_RegDef_t *pGPIOx, uint16_t Value);
void GPIO_ToogleOutputPin(GPIO_RegDef_t *pGPIOx, uint8_t PinNumber);

/* IRQ Configuration and ISR Handling */
void GPIO_IRQConfig(uint8_t IRQNumber, uint8_t IRQPriority, uint8_t status);
void GPIO_IRQHandling(uint8_t PinNumber);

#endif /* INC_STM32F407XX_GPIO_H_ */
