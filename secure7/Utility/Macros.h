/*
 * Macros.h
 *
 * Created: 2/12/2020 8:30:37 AM
 *  Author: Shaimaa
 */ 


#ifndef MACROS_H_
#define MACROS_H_

#define SETBIT(Reg,Bit)     ((Reg) |=(1<<(Bit)))
#define CLEARBIT(Reg,Bit)   ((Reg)  &=~(1<<(Bit)))
#define TOGGLEBIT(Reg,Bit)  ((Reg)  ^=(1<<(Bit)))
#define READBITE(Reg,Bit)   (((Reg)  &(1<<(Bit)))>>(Bit))



#endif /* MACROS_H_ */