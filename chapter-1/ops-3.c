#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // declare and initialize variable (inspired by the famous '80s song)
    int tommyTutone = 8675309;
    
    // print number in reverse using combination of looping, mod 10, and integer division
    while (tommyTutone > 0)
    {
        // uncomment the line below to see the value of the tommyTutone variable at each iteration in the loop
        //printf("\ntommyTutone: \t%d\t", tommyTutone);
        printf("%d", tommyTutone % 10);
        tommyTutone /= 10;
    }
    printf("\n");
}