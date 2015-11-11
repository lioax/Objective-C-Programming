#include <stdio.h>
#include<math.h>

int main(int argc, const char * argv[]) {
    
    // Print what a calculator would print when dividing 11 / 3
    printf("11 / 3.0 = %f\n\n", 11 / (float)3); // you must CAST the denominator as a float first to get remainders
    
    // Print 11 / 3 and its remainder
    printf("11 / 3 = %d remainder of %d \n\n", 11 / 3, 11 % 3); // Result: 3 because decimals round down in division
    
    // Print 3 * 3 + 5 * 2 = 19
    printf("3 * 3 + 5 * 2 = %d\n\n", 3 * 3 + 5 * 2);
    
    // use %d for decimal, %o for octal (8 bits), and %x for hexadecimal
    int x = 255;
    printf("x is %d.\n", x);
    printf("In octal, x is %o.\n", x);
    printf("In hexadecimal, x is %x.\n\n", x);
    
    // use %ld for long decimal if the long has lots of bits
    long y = 399;
    printf("y is %ld.\n", y);
    printf("In octal, y is %lo.\n", y);
    printf("In hexadecimal, y is %lx.\n\n", y);
    
    // use %lu for long unsigned if the long has lots of bits
    unsigned long z = 999;
    printf("z is %lu.\n", z);
    // Octal and hex already assume the number was unsigned
    printf("In octal, z is %lo.\n", z);
    printf("In hexadecimal, z is %lx.\n\n", z);
    
    // Print floating token and a mantissa token (%f and %e respectively)
    double d = 12345.6789;
    printf("y is %f\n", d);
    printf("y is %e\n\n", d);
    
    // Adding the .2 makes it so the token only shows two digits
    double t = 12345.6789;
    printf("y is %.2f\n", t);
    printf("y is %.2e\n\n\n\n", t);
    

    /************************************************************************************
     * CHALLENGE: Use the math library! Add code to main.c that displays the 
     * sine of 1 radian. Show the number rounded to three decimal points.
     * Note: It should be 0.841
     * Include the math library at the top of your code!
     ***********************************************************************************/
    // 1 radian is 180/PI
    printf("The sine of 1 radian = %.3f\n", sin(1));
    printf("PI is %f\n", M_PI);
    
    return 0;
}
