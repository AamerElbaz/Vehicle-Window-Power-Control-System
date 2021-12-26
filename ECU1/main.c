

#include"scheduler.h"

void main(void) {

	PortB_Init();
	 SYS();
	 UART0_init();
	

	while(1)
	{


		schedule();
	}
	
}
