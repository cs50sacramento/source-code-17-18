#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // declare variables for room verification
    char roomLetter;
    int roomNum;
    
    // verify correct letter in range A-G
    do
    {
       roomLetter = get_char("Enter your room letter: ");
    } while (roomLetter < 'A' || roomLetter > 'G');
    
    // verify correct number in range 1-20
    do
    {
        roomNum = get_int("Enter your room number: ");
    } while (roomNum < 1 || roomNum > 20);
    
    printf("Welcome! You are in room %c%d!\n", roomLetter, roomNum);
}