
#include "stm32f10x.h"
int main ( void )
{
	char  pin ;
RCC->APB2ENR |= (0x01 << 2) | (0x01 << 3) | (0x01 << 4) ;

	pin = 5 ;
	GPIOA->CRL &= ~(0xF << (pin*4));
	GPIOA->CRL |= (0x1 << (pin*4)) | (0x2 <<(pin*4+2));
	
	
	
	GPIOC->CRH &= ~(0xF << (pin*4));
	GPIOC->CRH |= (0x1 << (pin*4));
	
	while (1)
{
}


}