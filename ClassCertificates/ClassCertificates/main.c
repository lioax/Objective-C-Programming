#include <stdio.h>

// Declare funtion that allows you to pass in student, course, and numDays as char, char, int
void congratulateStudent(char *student, char *course, int numDays)
{
    printf("%s has done as much %s Programming as I could fit into %d days.\n",
           student, course, numDays); // Print the TOKENS that are FORMATTED using the % symbols and the actual msg
}

int main(int argc, const char * argv[]) {
    
    // Pass in Kate, Cocoa, and 5 into congratulateStudent()
    congratulateStudent("Kate", "Cocoa", 5);
    // Call the sleep function to wait 2 seconds before executing the next function
    sleep(2);
    congratulateStudent("Bo", "Objective-C", 2);
    sleep(2);
    congratulateStudent("Mike", "Python", 5);
    sleep(2);
    congratulateStudent("Liz", "iOS", 5);
    return 0;
}