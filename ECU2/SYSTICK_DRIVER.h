/*
 * SYSTICK_DRIVER.h
 *
 *  Created on: May 26, 2019
 *      
 */
#include"tm4c123gh6pm.h"
#include"stdbool.h"
#include"stdint.h"

#ifndef SYSTICK_DRIVER_H_
#define SYSTICK_DRIVER_H_

#define  INITIALIZE_TO_ZERO              (0)
#define  SYSTICK_ENABLE                  (5)
#define  SYSTEM_CLK_SPEED_KHZ            (16000-1)
#define  SYSTEM_TICK_MS                  (20)
#define  TIME_OUT                        (bool)(NVIC_ST_CTRL_R&0x10000)
#define  TIME_PER_PERIOD                 (SYSTEM_CLK_SPEED_KHZ*SYSTEM_TICK_MS)

extern void SYS(void);
extern bool checkStatus(void);


#endif /* SYSTICK_DRIVER_H_ */
