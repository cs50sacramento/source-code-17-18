#include <stdio.h>

int main(void)
{
    int i = 10;
    
    // count down from 10
    while (i > 0)
    {
        printf("%d...\n", i);
        i--;    // without this line, program becomes an infinite loop
    }
    printf("Blastoff!\n");
}