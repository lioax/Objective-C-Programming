/*******************
 * Recursion Example
 ******************/
 // When a function calls itself. singSongFor() calls itself on line 25!

#include <stdio.h>

void singSongFor(int numberOfBottles)
{   // There are two conditions, either that are bottles or there aren't.
    // When there ARE bottles, it can be infinitely many, therefore we only need to worry about the numberOfBottles == 0.
    if (numberOfBottles == 0) {
        printf("There are simply no more bottles of beer on the wall.\n\n");
    } else {
        
        printf("%d bottles of beer on the wall. %d bottles of beer.\n", numberOfBottles, numberOfBottles);
        
        // Decrements the numberOfBottles variable each time the loop is run
        int oneFewer = numberOfBottles - 1;
        printf("Take one down, pass it around, %d bottles of beer on the wall.\n\n", oneFewer);
        
        // Call singSongFor() again to run until this point where you will only skip this part if numberOfBottles == 0
        singSongFor(oneFewer);
        
        // Print a message just before the function ends
        /* Notice that this message runs ONLY at the end of the "FINAL ROUND" of the if statement.
         * The reason for this is because the statement calls singSongFor() and ONLY runs until line 25
         * over and over again, therefore STACKING the last printf() of each else statement to be run at the end
         * of the recursive statement over and over again.
         */
        printf("Put a bottle in the recycling, %d empty bottles in the bin.\n", numberOfBottles);
    } }

int main(int argc, const char * argv[])
{
    // We could sing 99 verses, but 10 is easier to think about
    singSongFor(10);
    return 0;
}