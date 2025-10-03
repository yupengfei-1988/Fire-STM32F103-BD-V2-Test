#include "stm32f10x.h"

int main(void)

{
	//RCC_APB2ENR配置为IOPB使能
	*(unsigned int *)(0x40021018) |= (1<<(1*3));
	
	//GPIOx_CRL配置为PORTB^0 推挽输出，10MHz时钟
	*(unsigned int *)(0x40010C00) |= (1<<(4*0));

	//GPIOx_ODR配置为PORTB^0，输出低电平
	*(unsigned int *)(0x40010C0C) &= ~(1<<(1*0));

	while(1);
	return 0;
}

void SystemInit(){
// 空函数，无需操作
}
