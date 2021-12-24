/*
 * SYSTICK_DRIVER.c
 *
 *  Created on: May 26, 2019
 *      
 */

#include"SYSTICK_DRIVER.h"

void SYS(void)
 {
 	        NVIC_ST_CTRL_R = INITIALIZE_TO_ZERO;                    //Disable systick
 		    NVIC_ST_RELOAD_R = TIME_PER_PERIOD;                     //Initialize timer with desired value
 			NVIC_ST_CURRENT_R = INITIALIZE_TO_ZERO;                 //Initialize current value to zero
 			NVIC_ST_CTRL_R = SYSTICK_ENABLE;                        //Enable internal clk source and systick timer
}
/*pre: Systick timer is enabled and initiaized with desired value.
 *
 *post: As soon as the time per period is fired , period is completed and Time_out is true.
 */
extern bool checkStatus(void){return TIME_OUT;}

