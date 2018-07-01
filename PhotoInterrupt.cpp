
#include "Arduino.h"
#include "PhotoInterrupt.h"


 void Photo_Pin_Set()
 {
    pinMode(Photo_1, INPUT_PULLUP);
    pinMode(Photo_2, INPUT_PULLUP);
    pinMode(Photo_3, INPUT_PULLUP);
    attachInterrupt(Photo_1, Photo_Interrupt_Call_Back_1, FALLING);
    attachInterrupt(Photo_2, Photo_Interrupt_Call_Back_2, FALLING);
    attachInterrupt(Photo_3, Photo_Interrupt_Call_Back_3, FALLING);
 }
