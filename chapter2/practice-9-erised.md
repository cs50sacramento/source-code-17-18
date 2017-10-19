# Erised

## Prerequisites
Loops

## Problem
Reveal the inscription on the Mirror of Erised, "Erised straeh ruoy tub ecaf ruoy ton wohs i", by printing it backwards! Write a function of type <code>void</code> that takes in a string, and prints out its reverse!

## Distribution Code
```c
#include <cs50.h>
#include <stdio.h>
#include <string.h>

void reverse(string s);

int main(void)
{
    string erised = "erised straeh ruoy tub ecaf ruoy ton wohs i";
    printf("The hidden message inscribed on the mirror of erised is: \n");
    reverse(erised);
}

void reverse(string s)
{
	// TODO
}
```