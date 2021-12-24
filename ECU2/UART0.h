/*
 * uart2.h
 *
 *  Created on: May 27, 2019
 *      
 */
#include <stdbool.h>
#ifndef UART2_H_
#define UART2_H_
 void UART1_init(void);
char rec_character(void);
 void Send_string(const char *Str);




#endif /* UART2_H_ */
