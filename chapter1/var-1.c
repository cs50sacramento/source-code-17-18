#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // prompt user for name
    printf("Enter your name: ");
    
    // declare userName variable --> data type + variable name
    string userName;
    
    // initialize variable with user input
    userName = get_string();
    
    // say hello to user
    printf("Hello, %s!\n", userName);
}