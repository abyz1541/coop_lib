
#ifndef PhotoInterrupt_h
#define PhotoInterrupt_h

#include "Arduino.h"

/*
Photo_Interrupt_Pin
*/
#define Photo_1 40
#define Photo_2 42
#define Photo_3 44

void Photo_Pin_Set();
void Photo_Interrupt_Call_Back_1();
void Photo_Interrupt_Call_Back_2();
void Photo_Interrupt_Call_Back_3();

#endif
