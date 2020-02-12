/*
 * DIO_ATMEGA.h
 *
 * Created: 26/01/2020 6:39:16 PM
 *  Author: Shaimaa
 */ 


#ifndef DIO_ATMEGA_H_
#define DIO_ATMEGA_H_

#include "uc_Configuration.h"
#include "Macros.h"
#include "StdType.h"



#define DIOA ((DIO_Struct *)(0x19+IO_OFFSET))
#define DIOB ((DIO_Struct *)(0x16+IO_OFFSET))
#define DIOC ((DIO_Struct *)(0x13+IO_OFFSET))
#define DIOD ((DIO_Struct *)(0x10+IO_OFFSET))



typedef enum
{
	INPUT_FLOAT,
	INPUT_PULLUP,
	OUTPUT,
}PinMode;

void pin_config(DIO_Struct * dio ,pinNumber pin_num ,PinMode pin_mode);
void pin_write(DIO_Struct * dio ,pinNumber pin_num ,digitalState state);
digitalState pin_read(DIO_Struct * dio ,pinNumber pin_num);


#endif /* DIO_ATMEGA_H_ */