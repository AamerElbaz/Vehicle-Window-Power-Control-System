
#ifndef TASKS_H_
#define TASKS_H_


#include"tm4c123gh6pm.h"
#include"PORTB_DRIVER.h"
#include"UART0_DRIVER.h"
#include "stdint.h"

#define DOWN                      0
#define UP                        1
#define OFF                       0
#define ON                        1
#define PASSENGER_WINDOW_UP      (bool)(GPIO_PORTB_DATA_R&0x01)
#define PASSENGER_WINDOW_DOWN    (bool)(GPIO_PORTB_DATA_R&0x02)
#define DRIVER_WINDOW_UP         (bool)(GPIO_PORTB_DATA_R&0x04)
#define DRIVER_WINDOW_DOWN       (bool)(GPIO_PORTB_DATA_R&0x08)
#define WINDOW_UPPER_LIMIT       (bool)(GPIO_PORTB_DATA_R&0x10)
#define WINDOW_DOWN_LIMIT        (bool)(GPIO_PORTB_DATA_R&0x20)
#define LOCK_SW                  (bool)(GPIO_PORTB_DATA_R&0x40)


typedef struct Task_t{

	void (*code)(void);
   uint32_t period;

}Tasks_t;

extern Tasks_t tasks[];
extern const uint8_t Num_of_tasks;
#endif /* TASKS_H_ */
