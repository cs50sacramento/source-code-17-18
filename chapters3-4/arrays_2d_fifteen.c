#include <stdio.h>

#define GRID_SIZE 5

int main(void)
{
    // initialize array
    int value = GRID_SIZE * GRID_SIZE - 1;
    int grid[GRID_SIZE][GRID_SIZE];
    for (int row = 0; row < GRID_SIZE; row++) // outer loop iterates over the rows
    {
        for (int column = 0; column < GRID_SIZE; column++, value--) // inner loop iterates over the columns
        {
            grid[row][column] = value;
        }
    }
    
    // print array
    for (int row = 0; row < GRID_SIZE; row++) // outer loop iterates over the rows
    {
        for (int column = 0; column < GRID_SIZE; column++) // inner loop iterates over the columns
        {
            // if value == 0, print _
            // else print the value
            printf("%4d\t", grid[row][column]);
        }
        printf("\n");
    }
    
    // search through array
    int tile = 5;
    for (int row = 0; row < GRID_SIZE; row++) // outer loop iterates over the rows
    {
        for (int column = 0; column < GRID_SIZE; column++) // inner loop iterates over the columns
        {
            if (grid[row][column] == tile)
            {
                // check four directions
            }
        }
    }
}
