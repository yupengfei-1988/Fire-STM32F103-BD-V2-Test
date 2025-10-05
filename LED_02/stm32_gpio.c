#include "stm32_gpio.h"
#include "common.h"

void GPIOx_SetBits(GPIO_TypeDef *GPIOx,uint16_t GPIO_Bitx)
{
		GPIOx->BSRR |= GPIO_Bitx;
};

void GPIOx_ResetBits(GPIO_TypeDef *GPIOx,uint16_t GPIO_Bitx)
{
		GPIOx->BRR |= GPIO_Bitx;
};
