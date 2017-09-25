#include <stdio.h>

int main(void)
{
    /* for loop to mimic
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
            printf("i = %d, j = %d\n", i, j);
    */
    
    for (int i = 0; i < 25; i++)
    {
        printf("i = %d, j = %d\n", i / 5, i % 5);
    }
}