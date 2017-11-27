#include <stdio.h>

#define GRID_SIZE 3

void print_game_board(char grid[GRID_SIZE][GRID_SIZE]);

int main(void)
{
    // declare a 2D array to store the grid in
    // a 2D array is an array where each element in that array is also an array
    char grid[GRID_SIZE][GRID_SIZE] = { { ' ', ' ', ' ' },
                                        { ' ', ' ', ' ' },
                                        { ' ', ' ', ' ' } };
    
    // another way to initialize each element is to use nested for loops
    // this code duplicates the lines above, but it shows an alternate method
    // just as we used for loops to iterate over a string (i.e. a char array),
    // we must use nested for loops to iteratre over arrays within arrays
    // the outer loop looks at each row individually
    // the innter loop looks at each element within each row
    for (int row = 0; row < GRID_SIZE; row++)
    {
        for (int column = 0; column < GRID_SIZE; column++)
        {
            grid[row][column] = ' ';
        }
    }
    
    print_game_board(grid);
}

void print_game_board(char grid[GRID_SIZE][GRID_SIZE])
{
    printf("  %c  |  %c  |  %c  \n", grid[0][0], grid[0][1], grid[0][2]);
    printf("-----------------\n");
    printf("  %c  |  %c  |  %c  \n", grid[1][0], grid[1][1], grid[1][2]);
    printf("-----------------\n");
    printf("  %c  |  %c  |  %c  \n", grid[2][0], grid[2][1], grid[2][2]);
}