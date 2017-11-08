#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(int argc, string argv[])
{
	// input verification
    if (argc < 5)
    {
        printf("You're gonna need more words for this to work!\n");
        return 1;
    }
    
    printf("%c", argv[1][0]);
    printf("%c", argv[4][3]);
    printf("%c", argv[2][2]);
    printf("%c", argv[3][5]);
    printf("%c", argv[4][0]);
    printf("%c", argv[2][0]);
    printf("%c", argv[1][6]);
    printf("\n");
    
    return 0;
}