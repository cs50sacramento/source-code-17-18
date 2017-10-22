#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(int argc, string argv[])
{
    if (argc < 2)
    {
        printf("usage: ./hello-4 <name>\n");
        return 1;
    }
    
    /**
     * argv is an array of strings, but wait strings are arrays of chars, so...
     * argv is really an array of arrays!
     * As a result, we can use our trusty friends -- the `for` loop and `strlen()` --
     * to print argv[1] letter by letter, indexing into just as we would any other array.
     * Another way of referring to an array of arrays is a 2-dimensional array
     */
    for (int i = 0, j = strlen(argv[1]); i < j; i++)
    {
        printf("%c\n", argv[1][i]);
    }
}