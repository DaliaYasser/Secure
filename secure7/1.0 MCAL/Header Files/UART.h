/*
 * UART.h
 *
 * Created: 4/11/2020 3:10:22 AM
 *  Author: Khaled
 */ 


#ifndef UART_H_
#define UART_H_

#include "UC_Configuration.h"
#include "Macros.h"
#include "StdType.h"

#define UBRR  Osc_Freq/16/Buad_Rate-1

void	UART_init(void);
void	UART_sendByte(uint8_t Data);
uint8_t UART_ReadByte(void);


#endif /* UART_H_ */