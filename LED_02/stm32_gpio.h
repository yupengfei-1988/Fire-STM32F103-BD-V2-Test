#ifndef __STM32_GPIO_H__
#define __STM32_GPIO_H__

#include "common.h"

//GPIO
#define GPIOA_BASE_ADDRESS			(APB2_BASE_ADDRESS+0x0800)
#define GPIOB_BASE_ADDRESS			(APB2_BASE_ADDRESS+0x0C00)
#define GPIOC_BASE_ADDRESS			(APB2_BASE_ADDRESS+0x1000)
#define GPIOD_BASE_ADDRESS			(APB2_BASE_ADDRESS+0x1400)
#define GPIOE_BASE_ADDRESS			(APB2_BASE_ADDRESS+0x1800)
#define GPIOF_BASE_ADDRESS			(APB2_BASE_ADDRESS+0x1C00)
#define GPIOG_BASE_ADDRESS			(APB2_BASE_ADDRESS+0x2000)

#define GPIO_Bit00					(uint16_t)(0x0001)		//0000 0000 0000 0001B
#define GPIO_Bit01					(uint16_t)(0x0002)		//0000 0000 0000 0010B
#define GPIO_Bit02					(uint16_t)(0x0004)		//0000 0000 0000 0100B
#define GPIO_Bit03					(uint16_t)(0x0008)		//0000 0000 0000 1000B
#define GPIO_Bit04					(uint16_t)(0x0010)		//0000 0000 0001 0000B
#define GPIO_Bit05					(uint16_t)(0x0020)		//0000 0000 0010 0000B
#define GPIO_Bit06					(uint16_t)(0x0040)		//0000 0000 0100 0000B
#define GPIO_Bit07					(uint16_t)(0x0080)		//0000 0000 1000 0000B
#define GPIO_Bit08					(uint16_t)(0x0100)		//0000 0001 0000 0000B
#define GPIO_Bit09					(uint16_t)(0x0200)		//0000 0010 0000 0000B
#define GPIO_Bit10					(uint16_t)(0x0400)		//0000 0100 0000 0000B
#define GPIO_Bit11					(uint16_t)(0x0800)		//0000 1000 0000 0000B
#define GPIO_Bit12					(uint16_t)(0x1000)		//0001 0000 0000 0000B
#define GPIO_Bit13					(uint16_t)(0x2000)		//0010 0000 0000 0000B
#define GPIO_Bit14					(uint16_t)(0x4000)		//0100 0000 0000 0000B
#define GPIO_Bit15					(uint16_t)(0x8000)		//1000 0000 0000 0000B
#define GPIO_BitALL					(uint16_t)(0xFFFF)		//1111 1111 1111 1111B

typedef struct{
	volatile uint32_t CRL;
	volatile uint32_t CRH;
	volatile uint32_t IDR;
	volatile uint32_t ODR;
	volatile uint32_t BSRR;
	volatile uint32_t BRR;
	volatile uint32_t CLKR;

}GPIO_TypeDef;

void GPIOx_SetBits(GPIO_TypeDef *GPIOx,uint16_t GPIO_Bitx);
void GPIOx_ResetBits(GPIO_TypeDef *GPIOx,uint16_t GPIO_Bitx);

#endif
