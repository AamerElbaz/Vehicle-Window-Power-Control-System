
#include"tm4c123gh6pm.h"
#include"UART0_DRIVER.h"
#include"stdint.h"
void UART0_init(void){
	SYSCTL_RCGCUART_R|=0x80;
	SYSCTL_RCGCGPIO_R|=0x10;
	GPIO_PORTE_AFSEL_R|=0x02;
	GPIO_PORTE_PCTL_R|=0x0000010;
	GPIO_PORTE_DEN_R|=0xFF;
	GPIO_PORTE_DIR_R|=0xFF;
	GPIO_PORTE_AMSEL_R=0;
	UART7_CTL_R&=~0x0001;
	UART7_IBRD_R=104;
	UART7_FBRD_R=21;
	UART7_LCRH_R =0x070;
	UART7_CTL_R=0x0101;
}
void Send_character(uint8_t data){

	while((UART7_FR_R&0x20) != 0);
		UART7_DR_R=data;
}
void Send_string(const char *Str){

	uint8_t i=0;
	while(Str[i] != '\0'){

		Send_character(Str[i]);
		i++;

	}

}

