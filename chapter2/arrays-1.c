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
    for (int index = 0; index < 3; index++)
    {
        printf("%d", array[index]);
        
        if (index < 2)
        {
            printf("/");
        }
    }
    
    printf("\n");
}