#include <cs50.h>
#include <stdio.h>

#define GRID_SIZE 3

// global variable
int moves = 0;

// function prototypes
void log_game_board(char grid[GRID_SIZE][GRID_SIZE]);

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
    // we must use nested for loops to iterate over arrays within arrays
    // the outer loop looks at each row individually
    // the innter loop looks at each element within each row
    for (int row = 0; row < GRID_SIZE; row++)
    {
        for (int column = 0; column < GRID_SIZE; column++)
        {
            grid[row][column] = ' ';
        }
    }
    
    // create new file for storing grid
    // opening it in write mode allows you to create a new file every time
    FILE* grid_log = fopen("log.txt", "w");
    
    // there's a chance the file creation process can fail, so this is necessary to make sure it worked
    if (grid_log == NULL)
    {
        printf("Error opening file.\n");
        return 1;
    }
    
    // always close file before terminating program or opening it elsewhere in your code
    fclose(grid_log);
    
    log_game_board(grid);
    
    grid[0][0] = 'O';
    
    log_game_board(grid);
    
    grid[0][1] = 'X';
    
    log_game_board(grid);
    
    grid[2][1] = 'O';
    
    log_game_board(grid);
    
    grid[1][0] = 'X';
    
    log_game_board(grid);
}

void log_game_board(char grid[GRID_SIZE][GRID_SIZE])
{
    // open the file I created above in append move
    // notice that the variable name can change, but the file name cannot
    FILE* log = fopen("log.txt", "a");
    
    // account for proper pluralization (or lack thereof) based on number of moves
    string move_text = (moves != 1) ? "moves" : "move";
    
    // every call to printf() becomes fprintf() with the first argument being the file itself
    fprintf(log, "After %d %s...\n", moves, move_text);
    fprintf(log, "  %c  |  %c  |  %c  \n", grid[0][0], grid[0][1], grid[0][2]);
    fprintf(log, "-----------------\n");
    fprintf(log, "  %c  |  %c  |  %c  \n", grid[1][0], grid[1][1], grid[1][2]);
    fprintf(log, "-----------------\n");
    fprintf(log, "  %c  |  %c  |  %c  \n", grid[2][0], grid[2][1], grid[2][2]);
    fprintf(log, "\n");
    
    // increment global variable since printing happens after every move
    moves++;
    
    // always close the file!
    fclose(log);
}