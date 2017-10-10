#include <cs50.h>
#include <stdio.h>

void sayHelloTimes(int times)
{
    for (int i = 0; i < times; i++)
    {
        printf("Hello.\n");
    }
}

int main(void)
{
    int num = get_int("How many times would you like to say hello?\n");
    sayHelloTimes(num);
}