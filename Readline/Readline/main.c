#import <readline/readline.h>
#import <stdio.h>

int main(int argc, const char * argv[])
{
    printf("Who is cool? "); // Prompt user
    const char *name = readline(NULL); // Declare variable called "name" and assign it the value in readline()
    printf("%s is cool!\n\n",name); // Print name the user inputs
    return 0;
}