# Loop Conversion

## Prerequisites
None

## Problem
Rewrite the following while loop as a do while loop (hint: recall the main difference between while and do-while loops):
```c
#include <cs50.h>
#include <stdio.h>

int main (void)
{
	int n = 0;
	while (n <= 0)
	{
	    printf("Please enter a positive integer: ");
	    n = GetInt();
	}

}

```