/*
 * UART.c
 *
 * Created: 4/11/2020 3:10:45 AM
 *  Author: Khaled
 */ 

#include "UART.h"

void	UART_init(void)
{
	UBRRL = (uint8_t)(UBRR);
	UBRRH = (uint8_t)((UBRR)>>8);	
	UCSRB |= (1<<3) | (1<<4);            /*Rx and Tx Enable*/ 
	UCSRC |= (1<<7) | (1<<2) | (1<<1);   /*select UCSRC and set the char size with 8 bit*/
}

void	UART_sendByte(uint8_t Data)
{
	while((UCSRA & (1<<5)) == 0)
	{
			
	}
	UDR = Data;
}

uint8_t UART_ReadByte(void)
{
	while((UCSRA & (1<<7)) == 0)
	{
	}
	return UDR;
}




