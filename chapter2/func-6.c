#include <cs50.h>
#include <stdio.h>

// declare function to be defined after main() -- function declaration (or function prototype)
int get_pos_int(string prompt);

int main(void)
{
    // call function to get a positive int and store it in a variable userNum
    int userNum = get_pos_int("Enter a positive number: ");
    
    // print the number given to me by the user
    printf("You entered the number %d.\n", userNum);
}

// write a function that asks a user for an integer and reprompts if non-positive
int get_pos_int(string prompt)
{
    int x;

    do
    {
        printf("%s", prompt);
        x = get_int();
    }
    while (x <= 0);
    
    return x;
}