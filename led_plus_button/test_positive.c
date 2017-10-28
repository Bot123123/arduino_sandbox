//
//  test_positive.c
//  
//
//  Created by Andrew on 10/28/17.
//

#include "test_positive.h"
#include "main.c"

int main(){
    setup();
    
    buttonStateHandler(HIGH);
    buttonStateHandler(LOW);
    
    printf("digitalWriteCounter: %d\n", digitalWriteCounter);
    
    buttonStateHandler(HIGH);
    buttonStateHandler(HIGH);
    buttonStateHandler(HIGH);
    buttonStateHandler(HIGH);
    
    printf("digitalWriteCounter: %d\n", digitalWriteCounter);
    buttonStateHandler(LOW);
    printf("digitalWriteCounter: %d\n", digitalWriteCounter);
    
    return 0;
};
