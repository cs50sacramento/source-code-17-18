# echo!

## Prerequisites
Loops; Arrays

## Problem
`echo` is a terminal command, that, according to its man (short for "manual") page, "display[s] a line of text."

For example:
```c
~/workspace/chapter2/ $ echo This is CS50 AP
This is CS50 AP
```
Implement your own version of the `echo` command. You’ll want to loop through the user’s arguments and print them out one-by-one, adding a space between them. You may want to try the `echo` command in your terminal first to get a taste of how it works.

**HINT**: consult the program `hello-5.c` for an example of how to loop over command-line arguments. Your program will work slightly differently (obviously), but will have a similar structure. 

## Distribution Code

```c
#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(int argc, string argv[])
{
    // TODO
    
    return 0;
}
```