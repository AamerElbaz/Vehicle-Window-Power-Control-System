/*
 * uart2.c
 *
 *  Created on: May 27, 2019
 *      
 */


#include"tm4c123gh6pm.h"
#include"uart2.h"
#include<stdint.h>

void UART1_init(void){
	SYSCTL_RCGCUART_R|=0x02;
	SYSCTL_RCGCGPIO_R|=0x02;
	GPIO_PORTB_AFSEL_R|=0x01;
	GPIO_PORTB_PCTL_R|=0x01;
	GPIO_PORTB_DEN_R|=0xFF;
	GPIO_PORTB_DIR_R=0x0;
	 GPIO_PORTB_AMSEL_R=0;
	UART1_CTL_R&=~0x0001;
	UART1_IBRD_R=104;
	UART1_FBRD_R=21;
	UART1_LCRH_R =0x070;
	UART1_CTL_R=0x0201;
}



char rec_character(void){
	char c;
	while((UART1_FR_R&0x10) != 0){}
		c=(UART1_DR_R);
		return c;

}
