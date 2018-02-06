/**
 * The C program below is correct in its implementation of the math algorithms for finding the gcd and lcm,
 * respectively. However, it is much better design to encapsulate the functionality of each of these algorithms
 * into their own functions. Your task is to abstract away the details such that main() calls gcd() and lcm()
 * and receives back the gcd and lcm of its two inputs. The function signatures are provided;
 * implement them below main() where you see the TODO comment.
 */

#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>		// included in order to use abs()

int gcd(int x, int y);
int lcm(int x, int y);

int main(void)
{
	int x = get_int("Enter a number: ");
	int y = get_int("Enter another number: ");

	int gcd_of_x_and_y = gcd(x, y);
	printf("The greatest common divisor of %d and %d is %d.\n", x, y, gcd_of_x_and_y);

	int lcm_of_x_and_y = lcm(x, y);
	printf("The least common multiple of %d and %d is %d.\n", x, y, lcm_of_x_and_y);
}

int gcd(int x, int y)
{
	int gcd_value = 1;
	while (y != 0)
	{
		gcd_value = y;
		y = x % y;
		x = gcd_value;
	}
	return gcd_value;
}

int lcm(int x, int y)
{
	int numerator = abs(x * y);
	int denominator = gcd(x, y);
	return numerator / denominator;
}