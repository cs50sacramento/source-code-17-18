#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // gather user input
    int userNum = get_int("Enter an integer: ");
    
    // determine whether it is even or odd
    if (userNum % 2 == 0)
    {
        printf("You entered an even number!\n");
    }
    else
    {
        printf("You entered an odd number!\n");
    }
}