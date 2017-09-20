#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // gather user input
    int userNum = get_int("Enter an integer: ");
    
    // print first part of output statement
    printf("You entered an ");
    
    // determine whether it is even or odd using ternary operator
    (userNum % 2 == 0) ? printf("even number!\n") : printf("odd number!\n");
}