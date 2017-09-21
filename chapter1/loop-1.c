#include <stdio.h>

int main(void)
{
    // say hello three times
    for (int i = 0; i < 3; i++)
    {
        printf("hello!\n");
    }

    // print numbers 1-10 odd separated by tabs
    for (int i = 1; i < 10; i += 2)
    {
        printf("%d\t", i);
    }
    printf("\n");
}