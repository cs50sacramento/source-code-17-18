#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // declare three variables
    int month, day, year;
    
    // prompt user for input
    printf("Please enter the date according the format mm/dd/yy.\n");
    
    // pass prompt for get_int() as argument
    month = get_int("Month: ");
    day = get_int("Day: ");
    year = get_int("Year: ");
    
    // print date for user
    printf("%d/%d/%d\n", month, day, year);
    
}