//
//  test_positive.h
//  
//
//  Created by Andrew on 10/28/17.
//

#ifndef test_positive_h
#define test_positive_h

#include <stdio.h>
#include <stdbool.h>

const int OUTPUT = -1;
const int INPUT = -2;
const int HIGH = -3;
const int LOW = -4;

int digitalRead(int pin){
    printf("digitalRead: pin -> %d\n", pin);
    return 0;
}

int digitalWritePins[5];
int digitalWriteStates[5];
int digitalWriteCounter = 0;

void digitalWrite(int pin, int state){
    digitalWritePins[digitalWriteCounter] = pin;
    digitalWriteStates[digitalWriteCounter] = state;
    digitalWriteCounter += 1;
}

void pinMode(int pin, int state){
    printf("pinMode: pin -> %d, state -> %d\n", pin, state);
}

#endif /* test_positive_h */
