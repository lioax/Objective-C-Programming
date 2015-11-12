/************************************************************************************
 * CHALLENGE: Write a program that counts backwards from 99 through 0 by 3,
 * printing each number. If the number is divisible by 5, it should also print the
 * words "Found One!"
 ***********************************************************************************/
#include <stdio.h>

int main(int argc, const char * argv[])
{
    for (int i = 99; i >= 0; i-=3){
        printf("%d \n", i);
        
        if (i % 5 == 0) {
            printf("Found One! \n");
        }
    }
    
    return 0;
}