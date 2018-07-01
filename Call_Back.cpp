
#include "Arduino.h"
#include "PhotoInterrupt.h"
#include "Motor.h"

void Photo_Interrupt_Call_Back_1()
{
    // Motor 1 Stop
    digitalWrite(M1_STSP, LOW);

    

}

void Photo_Interrupt_Call_Back_2()
{
    Serial.println("han2");
}

void Photo_Interrupt_Call_Back_3()
{
    Serial.println("han3");
}