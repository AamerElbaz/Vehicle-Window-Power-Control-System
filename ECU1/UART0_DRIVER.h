
#ifndef UART_INIT_H_
#define UART_INIT_H_
#include"stdint.h"


extern void UART0_init(void);
extern void Send_character(uint8_t data);
extern void Send_string(const char *Str);

#endif /* UART_INIT_H_ */
