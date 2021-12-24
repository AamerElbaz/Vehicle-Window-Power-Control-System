

#include"tm4c123gh6pm.h"
#include"stdbool.h"
#include "stdint.h"

/*
 * preconditions: target is connected properly to the device.
 * postconditions : PortF pins(1-2-3) are enable and ready to use.
 */


 void PortB_Init(void)
   {
  	 SYSCTL_RCGCGPIO_R |= 0x02;
  	 GPIO_PORTB_LOCK_R = 0x4C4F434B;
  	 GPIO_PORTB_CR_R    = 0xFF;
  	 GPIO_PORTB_DIR_R   = 0;
  	GPIO_PORTB_PDR_R    = 0xFF;
  	 GPIO_PORTB_PUR_R   = 0;
  	 GPIO_PORTB_DEN_R   = 0xFF;
   }


