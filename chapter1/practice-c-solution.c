#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // print menu of options
    printf("--- Vending Machine Menu ---\n");
    printf("1. Mars\n2. Snickers\n3. Milky Way\n4. Kit Kat\n");
    printf("5. Twix\n6. Crunch\n7. Hershey's\n8. 3 Musketeers.\n");
    
    // print selection based on user input
    int vendSelection = get_int("Make your selection: ");
    
    switch (vendSelection)
    {
        case 1:
            printf("Mars -- enjoy your candy!\n");
            break;
        case 2:
            printf("Snickers -- enjoy your candy!\n");
            break;
        case 3:
            printf("Milky Way -- enjoy your candy!\n");
            break;
        case 4:
            printf("Kit Kat -- enjoy your candy!\n");
            break;
        case 5:
            printf("Twix -- enjoy your candy!\n");
            break;
        case 6:
            printf("Crunch -- enjoy your candy!\n");
            break;
        case 7:
            printf("Hershey's -- enjoy your candy!\n");
            break;
        case 8:
            printf("3 Musketeers -- enjoy your candy!\n");
            break;
        default:
            printf("Invalid selection!\n");
            break;
    }
}