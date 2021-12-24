

#include"scheduler.h"

extern void schedule(void)
{
   static uint8_t Tick_Cn = INITIALIZE_TO_ZERO;
          uint8_t itr     = INITIALIZE_TO_ZERO;
          if( checkStatus())
  {
        	  Tick_Cn++;
     while(itr < Num_of_tasks)
     {

		 if((Tick_Cn % tasks[itr].period) == 0 )
		 {
		      tasks[itr].code();
		 }
		 itr++;
     }

  }
}





