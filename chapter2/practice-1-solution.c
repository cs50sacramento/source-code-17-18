#include <cs50.h>
#include <stdio.h>

// TODO: function prototype
double accumulate_interest(double balance, double rate);

int main(void)
{
    double start = get_double("Starting balance: ");
    double interest = get_double("Annual interest rate: ");
    
    double updated = accumulate_interest(start, interest);
    printf("Updated balance: %.2f\n", updated);
}

// TODO: function definition
double accumulate_interest(double balance, double rate)
{
    return balance + (balance * rate);
}