#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // prompt user for cost of meal
    printf("Enter the pre-tax cost of your meal: ");
    
    // declare and initialize variable on the same line
    float mealCost = get_float();
    
    // calculate tip of 18%
    float tip = mealCost * 0.18;
    
    // inform user of tip cost and total cost
    printf("Based on an 18%% tip, you should leave $%.2f.\n", tip);
    printf("Excluding tax, your meal now costs $%.2f.\n", tip + mealCost);
}