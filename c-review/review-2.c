/**
 * Write a C program that accepts as input one integer in the range 1-12,
 * corresponding to the 12 months of the year, and prints the number of 
 * days in that month using a chain of if-else conditions. Do not worry
 * about leap years for February - just print 28 or 29.
 */
 
#include <cs50.h>
#include <stdio.h>
 
int main(void)
{
	int month;
	
	do
	{
		month = get_int("Enter a month number (1-12): ");
	}
	while (month < 1 || month > 12);
	
	// option 1
	if (month == 1 || month == 3 || month == 5 || month == 7 ||
		month == 8 || month == 10 || month == 12)
	{
	 	printf("Month %d has 31 days.\n", month);
	}
	else if (month == 4 || month == 6 || month == 9 || month == 11)
	{
	 	printf("Month %d has 30 days.\n", month);
	}
	else
	{
	 	printf("Month %d has 28 or 29 days.\n", month);
	}
	
	// option 2
	switch (month)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			printf("Month %d has 31 days.\n", month);
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			printf("Month %d has 30 days.\n", month);
			break;
		case 2:
			printf("Month %d has 28 or 29 days.\n", month);
			break;
	}
	
	// option 3
	int daysInMonth[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	
	if (month != 2)
	{
		printf("Month %d has %d days.\n", month, daysInMonth[month-1]);
	}
	else
	{
		printf("Month %d has %d or %d days.\n", month, daysInMonth[month-1], daysInMonth[month-1] + 1);
	}
}