#include <stdio.h>

int main(void)
{
    // declare and initialize 7 variables
    int a = 82, b = 111, c = 115, d = 101, e = 98, f = 117, g = 100;
    
    // print values as integers
    printf("%d %d %d %d %d %d %d\n", a, b, c, d, e, f, g);
    
    // print values as chars
    // ABSTRACTION: characters are just integer values interpreted as characters due to %c (see ASCII table)
    printf("%c %c %c %c %c %c %c\n", a, b, c, d, e, f, g);
}