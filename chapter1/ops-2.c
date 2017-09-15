#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // demonstrate the use of mod 2 and a basic conditional expression
    printf("Enter an integer: ");
    int evenOrOdd = get_int();
    printf("The integer you entered is ");
    (evenOrOdd % 2 == 0) ? printf("even.\n") : printf("odd.\n");
    printf("\n");
    
    // demonstrate the use of mod 10
    int meaningOfLife = 42;
    printf("first digit of meaningOfLife: %d\n", meaningOfLife % 10);
    
    // use integer division to eliminate the last digit with compound assignment
    meaningOfLife /= 10;
    printf("second digit of meaningOfLife: %d\n", meaningOfLife % 10);
}