# Encryption

## Prerequisites
None

## Problem
An encryption application requires you to first input two integers that are larger than 100, one of which is a multiple of 7 and one of which is a multiple of 19. Add two functions to the code below which verify that the input meets the required criteria, and return true/false.  

## Distribution Code
```c
#include <cs50.h>
#include <stdio.h>

// TODO: Write function prototypes


int main(void)
{
    // query user for input
    int factor_1 = get_int("enter the first encryption factor: ");
    int factor_2 = get_int("enter the second encryption factor: ");
    
    // print result
    if (test_7(factor_1) && test_19(factor_2))
        printf("Success! Message was encrypted\n");
    else
        printf("Factors failed. Please try again later\n");
}

// TODO: Write function definitions

```