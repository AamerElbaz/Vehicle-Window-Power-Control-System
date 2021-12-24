/*
 * Tasks.c
 *`
 *  Created on: Apr 16, 2019
 *      
 */
static void rec_character(void);
static void Dispalay_status(void);
char c;
#include "Tasks.h"


Tasks_t tasks[]={

		{
				.code   = rec_character,
				.period = 1
		},
		{
				.code   = Dispalay_status,
	            .period = 2
		},

};

const uint8_t Num_of_tasks=(sizeof(tasks)/sizeof(Tasks_t));

static void rec_character(void){

	while((UART1_FR_R&0x10) != 0){}
		c=(UART1_DR_R);

}

static void Dispalay_status(void){

	switch(c){

	case 'A':
		Send_string("UP_passenger\n\r");
		break;
	case 'B':
		Send_string("DOWN_passenger\n\r");
		break;
	case'C':
		Send_string("UP_driver\n\r");
       break;
	case 'D':
		Send_string("DOWN_driver\n\r");
		break;
    }
}

