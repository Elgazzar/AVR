/*
 * LEDS.c
 *
 * Created: 2/25/2019 10:07:32 AM
 *  Author: AVE-LAP-040
 */ 

#include "DIO_Definitions.h"

void Led_One_Toggle(void)
{
	DIO_TogglePin(PIN8);
}

void Led_Two_Toggle(void)
{
	DIO_TogglePin(PIN9);
}
void Led_Three_Toggle(void)
{
	DIO_TogglePin(PIN11);
}

void Led_Four_Toggle(void)
{
	DIO_TogglePin(PIN12);
}