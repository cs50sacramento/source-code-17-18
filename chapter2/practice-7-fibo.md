# Non-recursive Fibonacci

## Prerequisites
Loops

## Problem
Calculating a series of Fibonacci numbers, in which any given number in the series is the sum of the previous two (e.g. 0, 1, 1, 2, 3, 5, 8, ...), is often done recursively (more on what this means later in the course). However, it can also be done quite effectively using an array. Write code to calculate and store the first 25 Fibonacci numbers in an array. You should only need to explicitly declare the first two numbers, and then use a loop to calculate and print the rest.

## Distribution Code

```c
#include <cs50.h>
#include <stdio.h>

#define N 25

int main(void)
{
    // declare the array, and store the first two values
    int fibo[N];
    fibo[0] = 0;
    fibo[1] = 1;
    
    // TODO: calculate and store the next 23 values 
    
    // TODO: print the entire series
}
```