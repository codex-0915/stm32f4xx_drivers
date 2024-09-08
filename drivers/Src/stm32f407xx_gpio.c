/***************************************************************************************************
 * 
 * @file   stm32f407xx_gpio.c
 * @brief  Contains all STM32F407xx GPIO functions and api
 *
 * @author Kyl Justin Perez
 * @date   May 12, 2024
 *
 ***************************************************************************************************/

/***************************************************************************************************/
/******************************************* Include File ******************************************/
/***************************************************************************************************/

#include "stm32f407xx_gpio.h"

/***************************************************************************************************/
/******************************************** GPIO APIs ********************************************/
/***************************************************************************************************/

/****************************************************************************************************
 * @fn              - GPIO_PeriClockControl
 *
 * @brief           - Enables or disables peripheral clock for the given GPIO port
 * 
 * @param           - *pGPIOx           base address if the gpio peripheral
 * @param           - status            Enable or Disable
 * 
 * @return          - None
 * 
 * @note            - None
 *
 ***************************************************************************************************/
void GPIO_PeriClockControl(GPIO_RegDef_t *pGPIOx, uint8_t Status)
{
    if (Status == ENABLE)
    {
        if (pGPIOx == GPIOA)
        {
            GPIOA_PCLK_EN();
        }
        else if (pGPIOx == GPIOB)
        {
            GPIOB_PCLK_EN();
        }
        else if (pGPIOx == GPIOC)
        {
            GPIOC_PCLK_EN();
        }
        else if (pGPIOx == GPIOD)
        {
            GPIOD_PCLK_EN();
        }
        else if (pGPIOx == GPIOE)
        {
            GPIOE_PCLK_EN();
        }
        else if (pGPIOx == GPIOF)
        {
            GPIOF_PCLK_EN();
        }
        else if (pGPIOx == GPIOG)
        {
            GPIOG_PCLK_EN();
        }
        else if (pGPIOx == GPIOH)
        {
            GPIOH_PCLK_EN();
        }
        else if (pGPIOx == GPIOI)
        {
            GPIOI_PCLK_EN();
        }
    }
    else
    {
        if (pGPIOx == GPIOA)
        {
            GPIOA_PCLK_DI();
        }
        else if (pGPIOx == GPIOB)
        {
            GPIOB_PCLK_DI();
        }
        else if (pGPIOx == GPIOC)
        {
            GPIOC_PCLK_DI();
        }
        else if (pGPIOx == GPIOD)
        {
            GPIOD_PCLK_DI();
        }
        else if (pGPIOx == GPIOE)
        {
            GPIOE_PCLK_DI();
        }
        else if (pGPIOx == GPIOF)
        {
            GPIOF_PCLK_DI();
        }
        else if (pGPIOx == GPIOG)
        {
            GPIOG_PCLK_DI();
        }
        else if (pGPIOx == GPIOH)
        {
            GPIOH_PCLK_DI();
        }
        else if (pGPIOx == GPIOI)
        {
            GPIOI_PCLK_DI();
        }
    }
}

/****************************************************************************************************
 * @fn 		        - GPIO_Init
 *
 * @brief		    - 
 * 
 * @param   		- *pGPIOHandle
 * 
 * @return			- None
 * 
 * @note            - None
 *
 ***************************************************************************************************/
void GPIO_Init(GPIO_Handle_t *pGPIOHandle)
{
    /* TODO:
        1. Configure the mode of GPIO pin
        2. Configure the speed
        3. Configure the pupd settings
        4. Configure the output type
        5. Configure the alternative functionality
    */
}

/****************************************************************************************************
 * @fn 		        - GPIO_DeInit
 *
 * @brief		    - 
 * 
 * @param   		- *pGPIOx			base address if the gpio peripheral
 * 
 * @return			- None
 * 
 * @note            - None
 *
 ***************************************************************************************************/
void GPIO_DeInit(GPIO_RegDef_t *pGPIOx)
{

}

/****************************************************************************************************
 * @fn 		        - GPIO_ReadFromInputPin
 *
 * @brief		    - 
 * 
 * @param	    	- *pGPIOx			base address if the gpio peripheral
 * @param           - PinNumber         
 * 
 * @return			- 
 * 
 * @note            - None
 *
 ***************************************************************************************************/
uint8_t GPIO_ReadFromInputPin(GPIO_RegDef_t *pGPIOx, uint8_t PinNumber)
{

}

/****************************************************************************************************
 * @fn 		        - GPIO_ReadFromInputPort
 *
 * @brief		    - 
 * 
 * @param	    	- *pGPIOx			base address if the gpio peripheral        
 * 
 * @return			- 
 * 
 * @note            - None
 *
 ***************************************************************************************************/
uint16_t GPIO_ReadFromInputPort(GPIO_RegDef_t *pGPIOx)
{

}

/****************************************************************************************************
 * @fn 		        - GPIO_WriteToInputPin
 *
 * @brief		    - 
 * 
 * @param	    	- *pGPIOx			base address if the gpio peripheral
 * @param           - PinNumber         
 * @param           - Value             
 * 
 * @return			- None
 * 
 * @note            - None
 *
 ***************************************************************************************************/
void GPIO_WriteToInputPin(GPIO_RegDef_t *pGPIOx, uint8_t PinNumber, uint8_t Value)
{

}

/****************************************************************************************************
 * @fn 		        - GPIO_WriteToOutputPort
 *
 * @brief		    - 
 * 
 * @param           - *pGPIOx			base address if the gpio peripheral        
 * @param           - Value             
 * 
 * @return			- None
 * 
 * @note            - None
 *
 ***************************************************************************************************/
void GPIO_WriteToOutputPort(GPIO_RegDef_t *pGPIOx, uint16_t Value)
{

}

/****************************************************************************************************
 * @fn 		        - GPIO_ToogleOutputPin
 *
 * @brief		    - 
 * 
 * @param	    	- *pGPIOx			base address if the gpio peripheral
 * @param           - PinNumber                   
 * 
 * @return			- None
 * 
 * @note            - None
 *
 ***************************************************************************************************/
void GPIO_ToogleOutputPin(GPIO_RegDef_t *pGPIOx, uint8_t PinNumber)
{

}

/****************************************************************************************************
 * @fn 		        - GPIO_IRQConfig
 *
 * @brief		    - 
 * 
 * @param	    	- IRQNumber         
 * @param           - IRQPriority       
 * @param           - status            
 * 
 * @return			- None
 * 
 * @note            - None
 *
 ***************************************************************************************************/
void GPIO_IRQConfig(uint8_t IRQNumber, uint8_t IRQPriority, uint8_t Status)
{

}

/****************************************************************************************************
 * @fn 		        - GPIO_IRQHandling
 *
 * @brief		    - 
 * 
 * @param	    	- PinNumber                    
 * 
 * @return			- None
 * 
 * @note            - None
 *
 ***************************************************************************************************/
void GPIO_IRQHandling(uint8_t PinNumber)
{

}