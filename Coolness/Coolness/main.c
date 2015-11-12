#include <stdio.h>

int main(int argc, const char * argv[])
{
//    Loops are used to avoid repetition of code
//    printf("LioAx is Cool\n");
//    printf("LioAx is Cool\n");
//    printf("LioAx is Cool\n");
//    printf("LioAx is Cool\n");
//    printf("LioAx is Cool\n");
//    printf("LioAx is Cool\n");
//    printf("LioAx is Cool\n");
//    printf("LioAx is Cool\n");
//    printf("LioAx is Cool\n");
//    printf("LioAx is Cool\n");
    
    // WHILE LOOP   - Increments at the end
    int i = 0; // initialize
    
    while (i < 6) { // condition
        printf("%d. While loops are cool.\n", i);
        i++;    // increment
    }
    
    // FOR LOOP
        // initialize; condition; increment;
    for (i = 0; i <= 5; i++) {
        printf("%d. For loops are sweet!\n", i);
    }
    
    // DO-WHILE LOOP - Ensures code block is run at least once
    do {
        printf("%d. Do-While loops are for the l33t\n", i);
        i++;
    } while (i <= 10);
    
    
    // Step through positive integers to find x where x + 90 = x^2
    int x;
    for (x = 0; x < 12; x++) {
        printf("Checking x = %d\n", x);
        if (x + 90 == x * x) {
            break; } // When a break is called, execution goes straight to end of code block
    }
    printf("The answer is %d.\n", x);
    
    // Step through skipping multiples of 3
    int y;
    for (y = 0; y < 12; y++) {
        if (y % 3 == 0) {
            continue;
        }
        printf("Checking y = %d\n", y);
        if (y + 90 == y * y) {
            break; }
    }
    printf("The answer is %d.\n", y);
    
    return 0;
}