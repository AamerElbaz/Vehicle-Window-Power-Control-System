/*
 * UART_INIT.c
 *
 *  Created on: May 26, 2019
 *      
 */
#include"tm4c123gh6pm.h"
#include"UART_INIT.h"
#include"stdint.h"
void UART0_init(void){
	SYSCTL_RCGCUART_R|=0x01;
	SYSCTL_RCGCGPIO_R|=0x01;
	GPIO_PORTA_AFSEL_R|=0x02;
	GPIO_PORTA_PCTL_R|=0x10;
	GPIO_PORTA_DEN_R|=0xFF;
	GPIO_PORTA_DIR_R|=0xFF;
	 GPIO_PORTA_AMSEL_R=0;
	UART0_CTL_R&=~0x0001;
	UART0_IBRD_R=104;
	UART0_FBRD_R=21;
	UART0_LCRH_R =0x070;
	UART0_CTL_R=0x0101;
}
void Send_character(uint8_t data){

	while((UART0_FR_R&0x20) != 0);
		UART0_DR_R=data;
}
void Send_string(const char *Str){

	uint8_t i=0;
	while(Str[i] != '\0'){

		Send_character(Str[i]);
		i++;

	}

}

