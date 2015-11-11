/************************************************************************************
 * CHALLENGE: Write a program that computes and displays the square of integer. 
 * Note: Put the numbers in quotation marks.
 ***********************************************************************************/

#include <stdio.h>

// Takes myInteger and squares it, then returns the new squared value
int calculateInteger(int myInteger)
{
    // variable to hold the result of myInteger squared
    int squared = myInteger * myInteger;
    
    // return the value of the new squared int back to the main function
    return squared;
}


int main(int argc, const char * argv[])
{
    int myInteger = 5; // Holds number we want to square
    int integerSquared = calculateInteger(myInteger); // Sends the myInteger as an argument to calculateInteger
    
    // Print formatted squared integer in between quotes
    printf("\"%d\" squared is \"%d\" \n", myInteger, integerSquared);
    return 0;
}