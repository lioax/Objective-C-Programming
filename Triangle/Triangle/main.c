/************************************************************************************
 * CHALLENGE: Write a function that takes the first two angles and returns the third.
 * Notes: 
 * The Interior Angles of a Triangle must add up to 180 degrees
 * The output looks like this: The third angle is 90.00
 * pg. 42
 ************************************************************************************/

#include <stdio.h>

// function that takes angle A and angle B as arguments and calculates the third angle
float interiorAngle(float angleA, float angleB)
{
    // variable to hold the result of angleC
    float thirdAngle = 180 - (angleA + angleB);
    
    // return the value of thirdAngle back to the angleC variable in the main function
    return thirdAngle;
}


int main(int argc, const char * argv[])
{
    float angleA = 30.0; // Variable that holds angleA
    float angleB = 60.0; // Variable that holds angleB
    float angleC = interiorAngle(angleA, angleB); // Variable that holds angleC
    printf("The third angle is %.2f\n", angleC);
    return 0;
}