#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // declare variable outside do-while loop in order to access it after loop ends (variable scope!)
    int userNum;
    
    do
    {
        userNum = get_int("Give me a number between 1 and 23: ");
    } while (userNum < 1 || userNum > 23);
    
    // create userNum number of rows
    for (int i = 0; i < userNum; i++)
    {
        // create UserNum number of columns in each row
        for (int j = 0; j < userNum; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}