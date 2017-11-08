#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(int argc, string argv[])
{
    for (int i = 0, j = argc; i < j; i++)
    {
        for (int k = 0, l = strlen(argv[i]); k < l; k++)
        {
            printf("%c\n", argv[i][k]);
        }
        printf("\n");
    }
    
}