/*
 * Fast_PWM_Timer1.c
 *
 * Created: 2/21/2019 11:28:25 AM
 * Author : AVE-LAP-040
 */ 

#include "Types.h"
#include "DIO_Registers_Definitions.h"
#include "DIO_Registers.h"
#include "Timer1.h"


int main(void)
{
	/*Setting Direction For Motor 1 Right or Left*/
	DIO_SetPinDirection(PIN26 , OUTPUT);
	DIO_SetPinDirection(PIN27 , OUTPUT);
	/*Setting Direction For Motor 2 Right or Left*/
	DIO_SetPinDirection(PIN30 , OUTPUT);
	DIO_SetPinDirection(PIN31 , OUTPUT);
	
	
	/*Setting Direction For Motor 2*/
	DIO_WritePin(PIN30,HIGH);
	DIO_WritePin(PIN31,LOW);
	/*intailize PWM*/
	Pwm_init();
    while (1) 
    {
    }
}

