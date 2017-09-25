#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string s = "All work and no play makes Jack a dull boy.";
    int i = 0;
    while(i < 120)
    {
        printf("%s\n", s);
        i += 12; // increase i by 10 every time in order to only have 10 iterations
    }
    return 0;
}