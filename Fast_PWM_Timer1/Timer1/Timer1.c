/*
 * Timer1.c
 *
 * Created: 2/21/2019 12:07:05 PM
 *  Author: AVE-LAP-040
 */ 
#include "DIO_Registers.h"
#include "DIO_Registers_Definitions.h"
#include "Timer1.h"


void Pwm_init(uint8 duty_Cycle)
{
	
	
	
	/* set TOP to 16bit */
	ICR1H = 0xFF;
	ICR1L = 0xFF;
	uint16 Top = (((uint16)(ICR1H) & 0x00FF) << 8) + ( ICR1L );
	uint32 OCRR = (uint32) ((( duty_Cycle * (uint32) Top) + 1 ) / 100);
	/* set PWM for 25% duty cycle @ 16bit  0x3F 0xFF*/
	OCR1AH = (uint8)((OCRR & 0xFF00)>>8);
	OCR1AL = (uint8)( OCRR & 0x00FF);
	
	//OCR1AH = 0x3f;
	//OCR1AL = 0xff;
	/* set PWM for 75% duty cycle @ 16bit */
	OCR1BH = 0xBF;
	OCR1BL = 0xFF;
	

	/* set none-inverting mode */
	TCCR1A |= (1 << COM1A1)|(1 << COM1B1);
	

	/* set Fast PWM mode using ICR1 as TOP */
	TCCR1A |= (1 << WGM11);
	TCCR1B |= (1 << WGM12)|(1 << WGM13);
	
	
	/* START the timer with no prescaler */
	TCCR1B |= (1 << CS10);
	
	
}