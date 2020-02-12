/*
 * UC_Configuration.h
 *
 * Created: 26/01/2020 7:17:13 PM
 * Author: Shaimaa
 */ 


#ifndef UC_CONFIGURATION_H_
#define UC_CONFIGURATION_H_

#include "Macros.h"
#include "StdType.h"

#define Osc_Freq 16000000
#define Buad_Rate 9600

#define IO_OFFSET	(0x20)

#define UCSRA		(*(vuint8_t*)0x2b)
#define UDR	        (*(vuint8_t*)0x2c)
#define UBRRH		(*(vuint8_t*)0x40)
#define UBRRL		(*(vuint8_t*)0x29)
#define UCSRB		(*(vuint8_t*)0x2a)
#define UCSRC		(*(vuint8_t*)0x40)
/*
#define UDR					((reg8*)(0x0c+IO_OFFSET))
#define UBRRH		        ((reg8*)(0x20+IO_OFFSET))
#define UBRRL				((reg8*)(0x09+IO_OFFSET))
#define UCSRA				((reg8*)(0x0b+IO_OFFSET))
#define UCSRB				((reg8*)(0x0a+IO_OFFSET))
#define UCSRC				((reg8*)(0x20+IO_OFFSET))
*/
#define ATMEGA32_SREG		((reg8*)(0x3F+IO_OFFSET))
#define ATMEGA32A_MCUCR		((reg8*)(0x35+IO_OFFSET))
#define ATMEGA32_MCUCSR		((reg8*)(0x34+IO_OFFSET))
#define ATMEGA32_GICR		((reg8*)(0x3B+IO_OFFSET))
#define GIFR				((reg8*)(0x3A+IO_OFFSET))

#define ISR_NONBLOCK 	__attribute__((interrupt))
#define _VECTOR(N) 		__vector_ ## N

#define GLOBAL_INTERRUPT_ENABLE()	{ATMEGA32_SREG->bits.b7=1;}
#define GLOBAL_INTERRUPT_DISABLE()	{ATMEGA32_SREG->bits.b7=0;}

		typedef union
		{
			vuint8_t allRegister;
			struct
			{
				vuint8_t b0:1;
				vuint8_t b1:1;
				vuint8_t b2:1;
				vuint8_t b3:1;
				vuint8_t b4:1;
				vuint8_t b5:1;
				vuint8_t b6:1;
				vuint8_t b7:1;
			}bits;
		}reg8;

		typedef struct
		{
			reg8 pin;
			reg8 ddr;
			reg8 port;
		}DIO_Struct;



#endif /* UC_CONFIGURATION_H_ */