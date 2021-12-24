/*
 * Tasks.h
 *
 *  Created on: Apr 16, 2019
 *      
 */
#ifndef TASKS_H_
#define TASKS_H_


#include"tm4c123gh6pm.h"
#include "stdint.h"
#include"UART_INIT.h"


typedef struct Task_t{

	void (*code)(void);
   uint32_t period;

}Tasks_t;

extern Tasks_t tasks[];
extern const uint8_t Num_of_tasks;
#endif /* TASKS_H_ */
