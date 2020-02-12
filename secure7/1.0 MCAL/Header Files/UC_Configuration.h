/*
 * UC_Configuration.h
 *
 * Created: 26/01/2020 7:17:13 PM
 *  Author: Shaimaa
 */ 


#ifndef UC_CONFIGURATION_H_
#define UC_CONFIGURATION_H_
#include "Macros.h"
#include "StdType.h"

#define IO_OFFSET	(0x20)


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