#include <cs50.h>
#include <stdio.h>

void printArray(int array[]);

int main(void)
{
    int birthday[3] = { 10, 12, 2014 };
    
    printArray(birthday);
    
    birthday[0] = 11;
    birthday[1] = 8;
    birthday[2] = 2016;
    
    printArray(birthday);
}

void printArray(int array[])
{
    for (int i = 0; i < 3; i++)
    {
        printf("%d", array[i]);
        
        if (i < 2)
        {
            printf("/");
        }
    }
    
    printf("\n");
}