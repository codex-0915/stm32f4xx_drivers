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
    uint8_t GPIO_PinNumber;         /* Possible values from "GPIO pin numbers" (0-15) */
    uint8_t GPIO_PinMode;           /* Possible values from "GPIO pin modes" (0-6) */
    uint8_t GPIO_PinSpeed;          /* Possible values from "GPIO pin possible output speed" (0-3) */
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

/* GPIO pin numbers */
#define GPIO_PIN_NO_0           (0)
#define GPIO_PIN_NO_1           (1)
#define GPIO_PIN_NO_2           (2)
#define GPIO_PIN_NO_3           (3)
#define GPIO_PIN_NO_4           (4)
#define GPIO_PIN_NO_5           (5)
#define GPIO_PIN_NO_6           (6)
#define GPIO_PIN_NO_7           (7)
#define GPIO_PIN_NO_8           (8)
#define GPIO_PIN_NO_9           (9)
#define GPIO_PIN_NO_10          (10)
#define GPIO_PIN_NO_11          (11)
#define GPIO_PIN_NO_12          (12)
#define GPIO_PIN_NO_13          (13)
#define GPIO_PIN_NO_14          (14)
#define GPIO_PIN_NO_15          (15)

/* GPIO pin modes */
#define GPIO_MODE_INPUT         (0)  /* GPIO Input Mode */
#define GPIO_MODE_OUTPUT        (1)  /* GPIO Output Mode */
#define GPIO_MODE_ALTFUNC       (2)  /* GPIO Alternate Function Mode */
#define GPIO_MODE_ANALOG        (3)  /* GPIO Analog Mode */
#define GPIO_MODE_IT_FT         (4)  /* Input Mode Falling Edge */
#define GPIO_MODE_IT_RT         (5)  /* Input Mode Rising Edge */
#define GPIO_MODE_IT_FTRT       (6)  /* Input Mode Falling-Rising Edge */

/* GPIO pin possible output types */
#define GPIO_OP_TYPE_PP         (0)  /* GPIO Output Push Pull */
#define GPIO_OP_TYPE_OD         (1)  /* GPIO Output Open Drain */

/* GPIO pin possible output speed */
#define GPIO_SPEED_LOW          (0)  /* GPIO Output Speed Low */
#define GPIO_SPEED_MEDIUM       (1)  /* GPIO Output Speed Medium */
#define GPIO_SPEED_FAST         (2)  /* GPIO Output Speed Fast */
#define GPIO_SPEED_HIGH         (3)  /* GPIO Output Speed High */

/* GPIO pin pull up and pull down configuration macros */
#define GPIO_NO_PUPD            (0)
#define GPIO_PIN_PU             (1)
#define GPIO_PIN_PD             (2)

/***************************************************************************************************/
/********************************************** Prototypes *****************************************/
/***************************************************************************************************/

/***************************************************************************************************
 *                                    APIs supported by this driver
 *       For more information about the APIs, check the function definitions / function headers
 ***************************************************************************************************/

/* Peripheral Clock Setup */
void GPIO_PeriClockControl(GPIO_RegDef_t *pGPIOx, uint8_t Status);

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
void GPIO_IRQConfig(uint8_t IRQNumber, uint8_t IRQPriority, uint8_t Status);
void GPIO_IRQHandling(uint8_t PinNumber);

#endif /* INC_STM32F407XX_GPIO_H_ */
