#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // query user for input
    int age_group;
    do
    {
        printf("Which age group are you a member of, 1 (children and seniors) or 2 (adults)? ");
        age_group = get_int();
    }
    while (age_group < 1 || age_group > 2);
    
    // condition rewritten as a ternary operator
    int ticket_price;
    (age_group == 1) ? (ticket_price = 20) : (ticket_price = 50);
    printf("The ticket cost is $%d\n", ticket_price);
}