#include "stm32f10x.h"

int main(void)

{
	//RCC_APB2ENR����ΪIOPBʹ��
	*(unsigned int *)(0x40021018) |= (1<<(1*3));
	
	//GPIOx_CRL����ΪPORTB^0 ���������10MHzʱ��
	*(unsigned int *)(0x40010C00) |= (1<<(4*0));

	//GPIOx_ODR����ΪPORTB^0������͵�ƽ
	*(unsigned int *)(0x40010C0C) &= ~(1<<(1*0));

	while(1);
	return 0;
}

void SystemInit(){
// �պ������������
}
