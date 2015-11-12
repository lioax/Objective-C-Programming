#include <stdio.h>

int main(int argc, const char * argv[])
{
    int i = 17;
    int *addressOfI = &i;
    
    // the & operator gets the variable's address in memory
    // %p is the token used to replace a memory address
    printf("i stores its value at %p\n", &i);
    printf("addressOfI stores its value at %p\n\n", addressOfI);
    
    *addressOfI = 89; // change the value of the variable in memory using * on the left
    printf("Now i is %d\n" ,i); // print the new VALUE of i (89)
    printf("But the address is still %p\n", addressOfI); // demonstrate the address is still the same
    printf("An int is %zu bytes\n", sizeof(int)); // %zu token replaces byte size and sizeof() passes the datatype
    printf("A pointer is %zu bytes\n\n", sizeof(int *)); // prints a pointer's size in bytes
    
    printf("the int stored at addressOfI is %d\n", *addressOfI); // Print the variable stored in addressOfI using the %d token
    printf("this function starts at %p\n\n", main); // funtion's memory address
    
    return 0;
}