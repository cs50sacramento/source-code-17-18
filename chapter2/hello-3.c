#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(int argc, string argv[])
{
    // end program early if only one command-line argument
    if (argc < 2)
    {
        // print proper usage of the program to help users know what is expected
        printf("usage: ./hello-3 <name>\n");
        
        // execution of a function ends whenever it reaches a return command
        // since main() is our only function here, this line ends our program completely
        return 1;
    }
    
    // argv[1] is guaranteed to exist since I checked the minimum length of argv[] above.
    string name = argv[1];
    
    // make use of our new favorite function strlen() from string.h
    int nameLength = strlen(name);
    
    printf("Hello, %s! Your name is %d letters long.\n", name, nameLength);
}