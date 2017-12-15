#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int num1 = get_int("Enter first integer: ");
    int num2 = get_int("Enter second integer: ");
    
    /* bad! -> what is the problem here? */
    num2 = num1;
    num1 = num2;
    
    // print unswapped values
    printf("First integer: %d\nSecond integer: %d\n", num1, num2);
    
    num1 = get_int("Enter first integer (again): ");
    num2 = get_int("Enter second integer (again): ");
    
    /* good! -> this is boilerplate swapping code */
    int temp = num1;
    num1 = num2;
    num2 = temp;
    
    // print swapped values
    printf("First integer: %d\nSecond integer: %d\n", num1, num2);
}