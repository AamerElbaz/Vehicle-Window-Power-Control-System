

#include"scheduler.h"

int main(void) {

	PortB_Init();
	 SYS();
	 UART0_init();
	

	while(1)
	{


		schedule();
	}


//	return 0;
}
