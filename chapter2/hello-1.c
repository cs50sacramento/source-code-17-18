#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string name = get_string("Enter your name: ");
    int nameLength = strlen(name);
    printf("Hello, %s! Your name is %d letters long.\n", name, nameLength);
}