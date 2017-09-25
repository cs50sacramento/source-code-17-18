#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // gather user input
    int userNum = get_int("Give me a number between 1 and 100: ");
    
    // print multiples of userNum <= 100
    for (int i = userNum; i <= 100; i += userNum)
    {
        printf("%d\t", i);
    }
    printf("\n");
}