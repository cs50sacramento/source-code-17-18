# Trieste

## Prerequisites
None

## Problem
Read through the code below. Without changing the code, run the program with the correct command line arguments, so that it prints the word "Trieste" (a [scenic](https://www.becasinternacionales.net/webapp/img/imgpro/50c754_triestre-italia_w600.jpg) port city on the Adriatic coast).

**HINT**: draw this out as a series of boxes, one for each command-line argument. Then, within each box, draw another series of boxes to correspond to each letter of the argument. 

## Distribution Code

```c
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
```