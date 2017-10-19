# Minesweeper

## Prerequisites
Loops; Conditions.

## Problem
In the code below, a 2-dimensional integer array of size 10x8 has hijacked, and randomly filled with 5 mines! You want to 'sweep' the array, and print out the location (coordinates in the array) of all 5 mines. The value 1 indicates a mine has been set; otherwise, the value will be 0! You can use coordinate values that are either 1-indexed (1-10, 1-8) or 0-indexed (0-9, 0-7).

## Distribution Code
```c
#include <cs50.h>
#include <stdio.h>
#include <time.h>

#define HEIGHT 10
#define WIDTH 8
#define MINE_NUM 5

int main(void)
{
    // initialize field to be empty, and fill with 5 mines randomly located
    int field[HEIGHT][WIDTH] = {{0}};
    time_t t;
    srand((unsigned) time(&t));
    for (int k = 0; k < MINE_NUM; k++)
    {
        int i = rand() % HEIGHT;
        int j = rand() % WIDTH;
        // if mine has been planted in this location already, try again
        if (field[i][j] == 1)
            k--;
        else
            field[i][j] = 1;
    }
    
    // TODO: print the location of the mines!


}
```