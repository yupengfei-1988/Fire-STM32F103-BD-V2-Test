#include "stm32f10x.h"

typedef struct{
	volatile uint32_t CRL;
	volatile uint32_t CRH;
	volatile uint32_t IDR;
	volatile uint32_t ODR;
	volatile uint32_t BSRR;
	volatile uint32_t BRR;
	volatile uint32_t CLKR;

}GPIO_TypeDef;

typedef struct{
	volatile uint32_t CR;
	volatile uint32_t CFGR;
	volatile uint32_t CIR;
	volatile uint32_t APB2RSTR;
	volatile uint32_t APB1RSTR;
	volatile uint32_t AHBENR;
	volatile uint32_t APB2ENR;
	volatile uint32_t APB1ENR;
	volatile uint32_t BDCR;
	volatile uint32_t CSR;

}RCC_TypeDef;

int main(void)

{
	#if 0
	//RCC_APB2ENR����ΪIOPBʹ��
	*(unsigned int *)(0x40021018) |= (1<<(1*3));
	
	//GPIOx_CRL����ΪPORTB^0 ���������10MHzʱ��
	*(unsigned int *)(0x40010C00) |= (1<<(4*0));

	//GPIOx_ODR����ΪPORTB^0������͵�ƽ
	*(unsigned int *)(0x40010C0C) &= ~(1<<(1*0));
	#endif
	
	RCC_TypeDef *RCC = (RCC_TypeDef *)RCC_BASE_ADDRESS;
	GPIO_TypeDef *GPIOB = (GPIO_TypeDef *)GPIOB_BASE_ADDRESS;

	RCC->APB2ENR |= (1<<(1*3));
	GPIOB->CRL &= (0xf<<(4*0));
	GPIOB->CRL |= (1<<(4*0));
	GPIOB->ODR &= ~(1<<(1*0));

	while(1);
	return 0;
}



void SystemInit(){
// �պ������������
}
