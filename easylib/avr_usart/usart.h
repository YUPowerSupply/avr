#ifndef _AVR_UART_H_
#define _AVR_UART_H_

#include <avr/io.h>

void avr_uart0_init(void);
void avr_uart0_send_byte(uint8_t tx_byte);
int16_t avr_uart0_receive_byte(void);

void avr_uart1_init(void);
void avr_uart1_send_byte(uint8_t tx_byte);
int16_t avr_uart1_receive_byte(void);
#endif
