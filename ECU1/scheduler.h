

#ifndef SCHEDULER_H_
#define SCHEDULER_H_

#include"tm4c123gh6pm.h"
#include"Tasks.h"
#include"SYSTICK_DRIVER.h"
#include"stdbool.h"
#include "stdint.h"

#define  INITIALIZE_TO_ZERO    (0)
#define  P2    (2)

void schedule(void);

#endif /* SCHEDULER_H_ */
