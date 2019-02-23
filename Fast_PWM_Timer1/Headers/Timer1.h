/*
 * Timer1.h
 *
 * Created: 2/21/2019 12:07:23 PM
 *  Author: AVE-LAP-040
 */ 


#ifndef TIMER1_H_
#define TIMER1_H_

#define TCNT1H (*(volatile uint8 *)0x4D)
#define TCNT1L (*(volatile uint8 *)0x4C)
#define TCCR1A (*(volatile uint8 *)0x4F)
#define TCCR1B (*(volatile uint8 *)0x4E)
/*TCNT1H Address*/
#define TCNT1H (*(volatile uint8 *)0x4D)
#define TCNT1L (*(volatile uint8 *)0x4C)

/*Output Compare Register Address */
#define OCR1AH (*(volatile uint8 *)0x4B)
#define OCR1AL (*(volatile uint8 *)0x4A)

/*ICR Register High and LOW*/
#define ICR1H (*(volatile uint8 *)0x47)
#define ICR1L (*(volatile uint8 *)0x46)

#define OCR1BH (*(volatile uint8 *)0x49)
#define OCR1BL (*(volatile uint8 *)0x48)

/*Timer Counter Control Register A*/
#define TCCR1A (*(volatile uint8 *)0x4F)
#define TCCR1B (*(volatile uint8 *)0x4E)
#define OCR1BL (*(volatile uint8 *)0x48)


#define COM1A0 6
#define COM1A1 7
/*PINS FOR TCCR1A */
#define WGM10 0
#define WGM11 1
#define WGM12 3

/*For Prescaler*/
#define CS10 0
#define CS11 1

#define COM1B0 4
#define COM1B1 5

#define One 1
#define Eight 8
#define Hundred 100
#define Max 0xFF

/*Header To PWM_inti()*/
#define TWENTY_FIVE 25

/*Masking For First and Last 8 bits */
#define First_8bits_Mask 0x00FF
#define Last_8bits_Mask 0xFF00

/*PINS FOR TCCR1B */
#define WGM13 4

void Pwm_init(uint8 duty_Cycle);


#endif /* TIMER1_H_ */