#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(int argc, string argv[])
{
    if (argc < 2)
    {
        printf("usage: ./hello-5 <name>\n");
        return 1;
    }
    
    /**
     * Working with 2D arrays necessitates nested for loops:
     *  - the outer loop loops over the array of arguments (which are themselves arrays)
     *  - the inner loop loops over each argument as an individual string array
     * You should be able to understand what each variable -- i, j, k, l --
     * is being used for in these loops.
     */
    for (int i = 0, j = argc; i < j; i++)
    {
        for (int k = 0, l = strlen(argv[i]); k < l; k++)
        {
            printf("%c\n", argv[i][k]);
        }
        printf("\n");
    }
    
}