#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // gather user input
    int userNum = get_int("Enter an integer: ");
    
    // determine whether it is positive, negative, or zero
    if (userNum > 0)
    {
        printf("You entered a positive number!\n");
    }
    else if (userNum < 0)
    {
        printf("You entered a negative number!\n");
    }
    else
    {
        printf("You entered zero!\n");
    }
}