/*
 * main.c
 */



#include"scheduler.h"

int main(void) {


	 SYS();
	 UART0_init();
	 UART1_init();
	

	while(1)
	{


		schedule();
	}


//	return 0;
}
