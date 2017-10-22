#include <cs50.h>
#include <stdio.h>
#include <string.h>

/**
 * Notice the change to the parameter list of main()
 * Instead of being void, it now accepts two arguments:
 *     `int argc` - an integer that tracks the number of command-line arguments
 *     `string argv[]` - an array of strings that holds the arguments themselves
 * But how does a user pass arguments to main()?
 * Think of running the executable in the terminal as calling main() directly
 * Therefore, calling this program with "./hello-2" yields an argc of 1 and an argv[0] of "./hello-2"
 * Whereas, "./hello-2 Toby" sets argc to 2 with argv[0] being the same as above and argv[1] as "Toby"
 */
int main(int argc, string argv[])
{
    // this line of code is highly problematic -- we will address it in hello-3
    string name = argv[1];
    
    // make use of our new favorite function strlen() from string.h
    int nameLength = strlen(name);
    
    printf("Hello, %s! Your name is %d letters long.\n", name, nameLength);
    
    // I get an unused parameter error if I don't use argc in some way, hence the line below
    printf("\nDEBUGGING: You entered %d arguments at the command line.\n", argc);
}