#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // declare and initialize variable
    int userSum = 0;
    
    // prompt three times and add the value to the sum each time
    // note the use of compound assignment
    // equivalent to userSum = userSum + get_int();
    userSum += get_int("Enter a number: ");
    userSum += get_int("Enter another number: ");
    userSum += get_int("Enter one final number: ");
    
    printf("The total of your three numbers is %d.\n", userSum);
}