#include <cs50.h>
#include <stdio.h>

// TODO: add verifier prototype
bool verify(int a, int b, int c);

int main(void)
{
    // input from user
    int x = get_int("Enter the first int you are adding: ");
    int y = get_int("Enter the second int you are adding: ");
    int z = get_int("Enter the result: ");
    
    // TODO: verify the result using the function you wrote, and print "correct!" or "incorrect!"
    bool correct = verify(x, y, z);
    
    if (correct)
    {
        printf("correct\n");
    }
    else
    {
        printf("incorrect\n");
    }
}

// TODO: write the verifier function
bool verify(int a, int b, int c)
{
    return (a + b == c);
}