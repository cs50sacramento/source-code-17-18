#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // declare variable for use within loop -- important for variable scope
    int userNum;
    
    do
    {
        userNum = get_int("Enter a positive integer: ");
    } while (userNum <= 0);
    
    printf("Thank you for entering %d!\n", userNum);
}