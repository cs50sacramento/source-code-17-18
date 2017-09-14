#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // compare integer division to floating-point division 
    printf("5 / 2 = %d\n", 5 / 2);
    printf("5 / 2 = %f\n", 5 / 2.0);
    
    // demonstrate how mod works
    printf("5 %% 2 = %d\n", 5 % 2);
    printf("18 %% 7 = %d\n", 18 % 7);
    printf("36 %% 6 = %d\n", 36 % 6);
    
    // demonstrate the use of mod 2 and a basic conditional expression
    printf("Enter an integer: ");
    int evenOrOdd = get_int();
    (evenOrOdd % 2 == 0) ? printf("even\n") : printf("odd\n");
    
    // demonstrate the use of mod 10
    int meaningOfLife = 42;
    printf("first digit of meaningOfLife: %d\n", meaningOfLife % 10);
    
    // use integer division to eliminate the last digit with compound assignment
    meaningOfLife /= 10;
    printf("second digit of meaningOfLife: %d\n", meaningOfLife % 10);
    
    // demonstrate operator precedence
    printf("5 - 5 * 2 + 7 %% 4 / 3 = %d\n", 5 - 5 * 2 + 7 % 4 / 3);
}