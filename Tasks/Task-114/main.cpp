#include "mbed.h"

DigitalOut redLED(PC_2); 
DigitalOut yellowLED(PC_3); 
DigitalOut greenLED(PC_6); 

int main()
{
    int multiplier = 1000000;

        redLED = 1;
        yellowLED = 1;
        greenLED = 1;
        wait_us(1*multiplier);
        
        redLED = 0;
        yellowLED = 0;
        greenLED = 0;
        wait_us(1*multiplier);

        while (true)
        {
    redLED = 1;
    wait_us(2*multiplier);

    yellowLED = 1;
    wait_us(2*multiplier);

        redLED = 0;
        yellowLED = 0;

    greenLED = 1;
    wait_us(2*multiplier);

        greenLED = 0;

    for (int n=0; n<5; n++)
    {
        yellowLED = 1;
        wait_us(0.25*multiplier);
        yellowLED = 0;
        wait_us(0.25*multiplier);

    }
    

    }


}