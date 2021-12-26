/*
 * main.c
 */



#include"scheduler.h"

void main(void) {


	 SYS();
	 UART0_init();
	 UART1_init();
	

	while(1)
	{


		schedule();
	}

	
}
