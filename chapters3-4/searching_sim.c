#include <cs50.h>
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <sys/resource.h>
#include <sys/time.h>

#undef calculate
#undef getrusage

#define UPPER_BOUND (INT_MAX / 2)

int binary_search_test(int n);
int linear_search_test(int n);
double calculate(const struct rusage* b, const struct rusage* a);

int main(void)
{
    // generate random number between 0 and 1023
    srand(time(NULL));
    int skittles = rand() % UPPER_BOUND;
    
    // structs for timing data
    struct rusage before, after;
    
    // benchmarks
    double linear_time = 0.0, binary_time = 0.0;
    
    printf("The pseudorandomly generated number is %d.\n", skittles);
    
    // find number using search algorithms and time the respective searches
    getrusage(RUSAGE_SELF, &before);
    int linear_search_guesses = linear_search_test(skittles);
    getrusage(RUSAGE_SELF, &after);
    linear_time = calculate(&before, &after);
    
    getrusage(RUSAGE_SELF, &before);
    int binary_search_guesses = binary_search_test(skittles);
    getrusage(RUSAGE_SELF, &after);
    binary_time = calculate(&before, &after);

    // display time of each search algorithm
    printf("Using linear search, the computer got it using %d guesses in %f seconds.\n", linear_search_guesses, linear_time);
    printf("Using binary search, the computer got it using %d guesses in %f seconds.\n", binary_search_guesses, binary_time);
}

int binary_search_test(int n)
{
    int guesses = 0;
    
    int min = 0;
    int max = UPPER_BOUND - 1;
    
    while (min <= max)
    {
        int guess = (min + max) / 2;
        
        if (guess < n)
        {
            guesses++;
            min = guess + 1;
        }
        else if (guess > n)
        {
            guesses++;
            max = guess - 1;
        }
        else 
        {
            guesses++;
            break;
        }
    }
    
    return guesses;
}

int linear_search_test(int n)
{
    int guesses = 0;
    
    for (int i = 0; i < UPPER_BOUND; i++)
    {
        if (i != n)
        {
            guesses++;
        }
        else
        {
            guesses++;
            break;
        }
    }
    
    return guesses;
}

/**
 * Returns number of seconds between b and a. 
 */
double calculate(const struct rusage* b, const struct rusage* a)
{
    if (b == NULL || a == NULL)
    {
        return 0.0;
    }
    else
    {
        return ((((a->ru_utime.tv_sec * 1000000 + a->ru_utime.tv_usec) -
                 (b->ru_utime.tv_sec * 1000000 + b->ru_utime.tv_usec)) +
                ((a->ru_stime.tv_sec * 1000000 + a->ru_stime.tv_usec) -
                 (b->ru_stime.tv_sec * 1000000 + b->ru_stime.tv_usec)))
                / 1000000.0);
    }
}