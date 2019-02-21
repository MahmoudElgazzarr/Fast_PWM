/*
 * Timer1.c
 *
 * Created: 2/21/2019 12:07:05 PM
 *  Author: AVE-LAP-040
 */ 
#include "DIO_Registers.h"
#include "DIO_Registers_Definitions.h"
#include "Timer1.h"

void Pwm_init()
{
	/*Set Pin Direction For Pins as OUTPUT*/
	DIO_SetPinDirection(PIN28 , OUTPUT);
	DIO_SetPinDirection(PIN29 , OUTPUT);
	/*TCNT1H equal zero and TCNT1L equal zero*/
	TCNT1H = 0x00;
	TCNT1L = 0x00;
	/*Timer Counter Control Register*/
	TCCR1A |= (1<<COM1A0);
	TCCR1B |= (1<<COM1A1);
	/*Set For Mode 14 For OCR1A*/
	TCCR1A &=~(1<<WGM10);
	TCCR1A |= (1<<WGM11);
	/*For Mode 14 For OCR1B */
	TCCR1B |= (1<<WGM12);
	TCCR1B |= (1<<WGM13);
	/*Top Value ICR1H & ICR1L*/
	ICR1H = 0x06;
	ICR1L = 0x3F;
	/*OCR1H && OCR1L*/
	/*0x03 0x20*/
	OCR1AH = 0x06;
	OCR1AL = 0x3F;
}