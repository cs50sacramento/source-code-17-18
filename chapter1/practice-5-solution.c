#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    printf("Enter a valid grade (between 60 and 100): ");
    n = get_int();
    
    // bug fixed by adding else
    if (n >= 90)
        printf("You got an A!\n");
    else if (n >= 80)
        printf("You got a B!\n");
    else if (n >= 70)
        printf("You got a C!\n");
    else if (n >= 60)
        printf("You got a D!\n");
}