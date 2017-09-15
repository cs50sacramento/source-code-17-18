#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // prompt user for age
    printf("Enter your age: ");
    
    // declare and initialize variable on the same line
    int userAge = get_int();

    // wish user a happy future birthday
    printf("You will be %d on your next birthday - happy future birthday!\n", userAge + 1);
}