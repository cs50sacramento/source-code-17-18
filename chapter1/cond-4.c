#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // gather user input for letter grade
    char grade = get_char("Enter your letter grade as a single character: ");
    
    // use switch statement to enumerate the five cases and the default case
    switch (grade)
    {
        case 'a':
        case 'A':
            printf("You got an A!\n");
            break;
        case 'b':
        case 'B':
            printf("You got a B!\n");
            break;
        case 'c':
        case 'C':
            printf("You got a C!\n");
            break;
        case 'd':
        case 'D':
            printf("You got a D!\n");
            break;
        case 'f':
        case 'F':
            printf("You got an F!\n");
            break;
        default:
            printf("Invalid grade!\n");
            break;
    }
    
    // same logic as above expressed as a typical chain of if-else if statements
    if (grade == 'a' || grade == 'A')
    {
        printf("You got an A!\n");
    }
    else if (grade == 'b' || grade == 'B')
    {
        printf("You got a B!\n");
    }
    else if (grade == 'c' || grade == 'C')
    {
        printf("You got a C!\n");
    }
    else if (grade == 'd' || grade == 'D')
    {
        printf("You got a D!\n");
    }
    else if (grade == 'f' || grade == 'F')
    {
        printf("You got an F!\n");
    }
    else
    {
        printf("Invalid grade!\n");
    }
}