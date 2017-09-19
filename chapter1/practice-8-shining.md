# The Shining

## Prerequisites
None

## Problem
Jack is going mad while writing his manuscript. Make sure he types `All work and no play makes Jack a dull boy.` exactly 10 times, and no more! You are only allowed to edit a single line in the code, the one marked with a `TODO` comment

## Distribution Code
```c
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string s = "All work and no play makes Jack a dull boy.";
    int i = 0;
    while(i < 120)
    {
        printf("%s\n", s);
        i += 1; // TODO: This is the only line you are allowed to edit!
    }
    return 0;
}
```
