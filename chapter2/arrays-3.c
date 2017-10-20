#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // a string is an array of characters terminated by the null zero '\0' (null terminator)

    // not properly null-terminated
    char greeting1[5] = { 'h', 'e', 'l', 'l', 'o' };
    char greeting2[5] = "hello";
    
    // properly null-terminated - leave enough room for the string length + 1
    char greeting3[6] = { 'h', 'e', 'l', 'l', 'o' };
    char greeting4[6] = { 'h', 'e', 'l', 'l', 'o', '\0' };
    char greeting5[6] = "hello";
    char greeting6[] = "hello";     // don't need to specify size when declaring/initializing on the same line
    
    // print the strings
    printf("%s\n%s\n%s\n%s\n%s\n%s\n\n", greeting1, greeting2, greeting3, greeting4, greeting5, greeting6);
    
    printf("Example of strlen(): ");
    for (int i = 0, j = strlen(greeting3); i < j; i++)
    {
        printf("%c", greeting3[i]);
    }
    printf("\n\n");
    
    // print addresses in memory
    printf("%p\n%p\n%p\n%p\n%p\n%p\n", greeting1, greeting2, greeting3, greeting4, greeting5, greeting6);
}