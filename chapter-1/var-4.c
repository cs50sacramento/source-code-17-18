#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // examples of data types
    char strikeout = 'K';                   // 1 byte of memory for a character
    string className = "This is CS50.";     // 4 or 8 bytes of memory for text
    int age = 30;                           // 4 bytes of memory for an int
    long long ageOfEarth = 4500000000;      // 8 bytes of memory for an int
    float pi = 3.14159265358979323846;      // 4 bytes of memory for a real number
    double morePi = 3.14159265358979323846; // 8 bytes of memory for a real number
    bool fun = true;                        // 1 byte of memory for true/false
    
    // print-outs of data types
    printf("strikeout: %c\n", strikeout);
    printf("className: %s\n", className);
    printf("age: %d\n", age);
    printf("anotherAge: %lld\n", ageOfEarth);
    printf("pi: %f\n", pi);
    printf("morePi: %f\n", morePi);
    printf("fun: %d\n", fun);
    
    /*
        examples of floating-point precision comparing floats and doubles
        by default, %f prints 6 digits for floats and double
        you are guaranteed only this much precision with floats
    */
    printf("\n");
    printf("pi to 20 digits:\t\t 3.14159265358979323846\n");
    printf("pi as float to 20 digits:\t %.20f\n", pi);        // right up to 6 digits
    printf("pi as double to 20 digits:\t %.20f\n", morePi);   // right up to 15 digits
}