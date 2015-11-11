#include <stdio.h>

float fahrenheitFromCelsius(float cel)
{
    float fahr = cel * 1.8 + 32.0; // Conversion formula given temperature Celsius
    printf("%f Celsius is %f Fahrenheit\n", cel, fahr); // Prints temp Celsius is temp Fahranheit
    return fahr; // This returns the temperature stored in the variable fahr to main()
    // IMPORTANT: the execution of a function stops when it returns. If printf (line 6) came AFTER return fahr, it would
    // never print to the console.
}

int main(int argc, const char * argv[])
{
    float freezeInC = 0; // Variable that stores freezing temperature in degrees Celsius
    float freezeInF = fahrenheitFromCelsius(freezeInC); // freezeInF is a variable equal to fahrenheitFromCelsius()
    // fahrenheitFromCelsius passes in freezeInC (which equals 0) as an argument
    
    // Because we returned fahr, freezeInF is now equal to fahr which equals 32.0
    printf("Water freezes at %f degrees Fahrenheit.\n", freezeInF); // Prints Water freezes at 32 degrees Fahrenheit.
    
    /* Why do we ALWAYS return 0 in main()?
     * When you return 0 to the system, you are saying “Everything went OK.” If you are terminating the program because
     * something has gone wrong, you return 1.
     */
    return 0;
    
    // It can also be written as return EXIT_SUCCESS; or if 1, return EXIT_FAILURE;
}

/*********************************
 * Example using GLOBAL VARIABLES
 *********************************/

//#include <stdio.h>
//#include <stdlib.h>
//// Declare a global variable
//float lastTemperature;
//float fahrenheitFromCelsius(float cel)
//{
//    lastTemperature = cel;
//    float fahr = cel * 1.8 + 32.0;
//    printf("%f Celsius is %f Fahrenheit.\n", cel, fahr);
//    return fahr;
//}
//int main(int argc, const char * argv[])
//{
//    float freezeInC = 0;
//    float freezeInF = fahrenheitFromCelsius(freezeInC);
//    printf("Water freezes at %f degrees Fahrenheit.\n", freezeInF);
//    printf("The last temperature converted was %f.\n", lastTemperature);
//    return EXIT_SUCCESS;
//}

/**********************************************************************************************************************
        THE RUNDOWN:
 **********************************
 #include <stdio.h>
 
 // function that returns a float named cel (which is a placeholder for the value in freezeInC that was passed into it)
 // this function returns a FLOAT from its results
 float fahrenheitFromCelsius(float cel)
 {
 // variable fahr is equal to variable cel * 1.8 + 32.0
 float fahr = cel * 1.8 + 32.0;
 
 // print variable "cel" is variable "fahr"
 printf("%f Celsius is %f Fahrenheit\n", cel, fahr);
 return fahr;
 }
 // main always runs first
 int main(int argc, const char * argv[])
 {
 // declare freezeInC variable (independent variable)
 float freezeInC = 0;
 // declare freezeInF variable (dependent variable) and set it to the function while passing in 0
 float freezeInF = fahrenheitFromCelsius(freezeInC);
 // print the freezeInF variable which holds the results returned from the function fahrenheitFromCelsius
 printf("Water freezes at %f degrees Fahrenheit.\n", freezeInF);
 return 0;
 }
 **********************************************************************************************************************/