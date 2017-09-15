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
    
    // demonstrate operator precedence
    printf("5 - 5 * 2 + 7 %% 4 / 3 = %d\n", 5 - 5 * 2 + 7 % 4 / 3);
}