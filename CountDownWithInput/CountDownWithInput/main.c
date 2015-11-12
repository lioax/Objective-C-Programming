/************************************************************************************
 * CHALLENGE v2: Write a program that counts backwards from 99 through 0 by 3,
 * printing each number. If the number is divisible by 5, it should also print the
 * words "Found One!".
 * V2 PORTION: Prompt the user for input, then kickoff the countdown from the user's
 * desired spot.
 ***********************************************************************************/
#import <readline/readline.h>
#import <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[])
{
    printf("Where should I start counting? \n");
    const char *beginCount = readline(NULL);
    int parsedCount = atoi(beginCount);
    
    for (int i = parsedCount; i >= 0; i-=3){
        printf("%d \n", i);
        
        if (i % 5 == 0) {
            printf("Found One! \n");
        }
    }
    
    return 0;
}