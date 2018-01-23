/**
 * Write a C program that accepts as input two integers,
 * performs five mathematical operations on them, and
 * prints the results.
 */

#include <cs50.h>
#include <stdio.h>

int main(void)
{
	int x = get_int("Enter the first number: ");
	int y = get_int("Enter the second number: ");
	
	printf("\n");
	printf("%d + %d = %d\n", x, y, x + y);
	printf("%d - %d = %d\n", x, y, x - y);
	printf("%d x %d = %d\n", x, y, x * y);
	printf("%d / %d = %.3f\n", x, y, (float) x / y);
	printf("%d %% %d = %d\n", x, y, x % y);
}