/*
 * BCDSevegments.h
 *
 * Created: 2/18/2019 12:56:54 PM
 *  Author: AVE-LAP-040
 */ 

#include "Types.h"
#include "DIO_Registers.h"
#include "DIO_Registers_Definitions.h"

#ifndef BCDSEVEGMENTS_H_
#define BCDSEVEGMENTS_H_

#define Zero 0
#define ONE 1
#define TWO 2
#define THREE 3
#define FOUR 4
#define FIVE 5
#define SIX 6
#define SEVEN 7
#define EIGHT 8
#define NINE 9

void BCDSevegments_Init();
void BCDSevegments_enable(uint8 segment_Number);
void BCDSevegments_disable(uint8 segment_Number);
void BCDSevegments_displayNo(uint8 number);



#endif /* BCDSEVEGMENTS_H_ */