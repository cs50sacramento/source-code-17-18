#include <stdio.h>

int main(void)
{
    // declare variables for performing x * y
    int x = 6;
    int y = 3;
    int answer = 0;
    
    // initialize counter with y value
    int counter = y;
    
    // add x to itself y (counter) times
    while (counter > 0)
    {
        answer += x;
        counter--;
    }
    
    printf("%d * %d = %d\n", x, y, answer);
}