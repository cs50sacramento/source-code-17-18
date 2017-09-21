#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // print multiplication table using nested for loops
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            printf("%d\t", i * j);
        }
        printf("\n");
    }
}