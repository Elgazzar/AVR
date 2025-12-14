/*
 * DIO.c
 *
 * Created: 12/14/2025 10:19:29 PM
 * Author : MElgazzar
 */ 
#define F_CPU 8000000UL    // Define CPU frequency for delay functions

#include <avr/io.h>
#include <util/delay.h>
#include "DIO_Definitions.h"
#include "DIO_Registers.h"


int main(void)
{
    /* Replace with your application code */
	DIO_SetPinDirection(PIN8,OUTPUT);
	DIO_SetPinDirection(PIN9,OUTPUT);
	DIO_SetPinDirection(PIN10,OUTPUT);
	DIO_SetPinDirection(PIN11,OUTPUT);
	DIO_SetPinDirection(PIN12,OUTPUT);
    while (1) 
    {
		DIO_TogglePin(PIN8);
		DIO_TogglePin(PIN9);
		DIO_TogglePin(PIN10);
		DIO_TogglePin(PIN11);
		DIO_TogglePin(PIN12);
		_delay_ms(1000);
    }
}

