#include <cs50.h>
#include <stdio.h>

// TODO: Write function prototypes
bool test_7(int num);
bool test_19(int num);

int main(void)
{
    // query user for input
    int factor_1 = get_int("enter the first encryption factor: ");
    int factor_2 = get_int("enter the second encryption factor: ");
    
    // print result
    if (test_7(factor_1) && test_19(factor_2))
        printf("Success! Message was encrypted\n");
    else
        printf("Factors failed. Please try again later\n");
}

// TODO: Write function definitions
bool test_7(int num)
{
    return (num > 100 && num % 7 == 0);
}

bool test_19(int num)
{
    return (num > 100 && num % 19 == 0);
}