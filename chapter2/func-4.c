#include <cs50.h>
#include <stdio.h>

int mult(int a, int b)
{
    return a * b;
}

int main(void)
{
    int x = 3;
    int y = 4;
    
    int ans = mult(x, y);
    
    printf("%d times %d eqals %d.\n", x, y, ans);
}