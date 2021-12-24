
#include "Tasks.h"
static void Passenger_Command(void);
static void Driver_Command(void);

Tasks_t tasks[]={

		{
				.code   = Driver_Command,
				.period = 3
		},
		{
				.code   = Passenger_Command,
	            .period = 2
		},

};

const uint8_t Num_of_tasks=(sizeof(tasks)/sizeof(Tasks_t));


static void Passenger_Command(void){


	if(PASSENGER_WINDOW_UP==ON && WINDOW_UPPER_LIMIT==OFF && LOCK_SW==OFF){
		Send_character('A');

	}
	else if(PASSENGER_WINDOW_DOWN==ON && WINDOW_DOWN_LIMIT==OFF &&  LOCK_SW==OFF){
		Send_character('B');

	}

}
static void Driver_Command(void){

	if(DRIVER_WINDOW_UP==ON && WINDOW_UPPER_LIMIT==OFF){
		Send_character('C');

	}
	else if(DRIVER_WINDOW_DOWN==ON && WINDOW_DOWN_LIMIT==OFF){
		Send_character('D');

	}

}
