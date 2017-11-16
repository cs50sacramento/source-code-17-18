#include <cs50.h>
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <sys/resource.h>
#include <sys/time.h>

#undef calculate
#undef getrusage

#define UPPER_BOUND 100000
#define ARRAY_SIZE 125000

void print_array(int *values);
unsigned long long bubble_sort_test(int *values);
unsigned long long selection_sort_test(int *values);
unsigned long long insertion_sort_test(int *values);
void merge_sort_test(int *values, int start, int end);
void merge(int *values, int start_1, int end_1, int start_2, int end_2);
double calculate(const struct rusage* b, const struct rusage* a);

int main(void)
{
    printf("Generating an array of almost sorted numbers...\n");
    
    // seed random number generator with current time
    srand(time(NULL));
    
    // fill array with random numbers
    int *values = (int*) malloc(sizeof(int) * ARRAY_SIZE);

    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        *(values + i) = i;
    }
    
    int random_index_one = rand() % ARRAY_SIZE;
    int random_index_two = rand() % ARRAY_SIZE;
    
    int temp = *(values + random_index_one);
    *(values + random_index_one) = *(values + random_index_two);
    *(values + random_index_two) = temp;
    
    // duplicate array for sorting purposes
    int *bubble_sort_values = (int*) malloc(sizeof(int) * ARRAY_SIZE);
    int *selection_sort_values = (int*) malloc(sizeof(int) * ARRAY_SIZE);
    int *insertion_sort_values = (int*) malloc(sizeof(int) * ARRAY_SIZE);
    int *merge_sort_values = (int*) malloc(sizeof(int) * ARRAY_SIZE);
    
    memcpy(bubble_sort_values, values, ARRAY_SIZE * sizeof(int));
    memcpy(selection_sort_values, values, ARRAY_SIZE * sizeof(int));
    memcpy(insertion_sort_values, values, ARRAY_SIZE * sizeof(int));
    memcpy(merge_sort_values, values, ARRAY_SIZE * sizeof(int));
    
    // structs for timing data
    struct rusage before, after;
    
    // benchmarks
    double bubble_sort_time = 0.0, selection_sort_time = 0.0, insertion_sort_time = 0.0, merge_sort_time = 0.0;
    
    printf("Sorting...\n");
    
    getrusage(RUSAGE_SELF, &before);
    unsigned long long bubble_sort_swaps = bubble_sort_test(bubble_sort_values);
    getrusage(RUSAGE_SELF, &after);
    bubble_sort_time = calculate(&before, &after);
    printf("Using bubble sort, the computer sorted the array in %f seconds using %llu swaps.\n", bubble_sort_time, bubble_sort_swaps);

    getrusage(RUSAGE_SELF, &before);
    unsigned long long selection_sort_swaps = selection_sort_test(selection_sort_values);
    getrusage(RUSAGE_SELF, &after);
    selection_sort_time = calculate(&before, &after);
    printf("Using selection sort, the computer sorted the array in %f seconds using %llu swaps.\n", selection_sort_time, selection_sort_swaps);
    
    getrusage(RUSAGE_SELF, &before);
    unsigned long long insertion_sort_swaps = insertion_sort_test(insertion_sort_values);
    getrusage(RUSAGE_SELF, &after);
    insertion_sort_time = calculate(&before, &after);
    printf("Using insertion sort, the computer sorted the array in %f seconds using %llu swaps.\n", insertion_sort_time, insertion_sort_swaps);

    getrusage(RUSAGE_SELF, &before);
    merge_sort_test(merge_sort_values, 0, ARRAY_SIZE - 1);
    getrusage(RUSAGE_SELF, &after);
    merge_sort_time = calculate(&before, &after);
    printf("Using merge sort, the computer sorted the array in %f seconds.\n", merge_sort_time);
    
    // release memory
    free(values);
    free(bubble_sort_values);
    free(selection_sort_values);
    free(insertion_sort_values);
    free(merge_sort_values);
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

/**
 * Print array for debugging purposes
 */
void print_array(int *values)
{
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        printf("%d ", *(values + i));
    }
    printf("\n");
}

/**
 * Sorts array of n values using bubble sort.
 */
unsigned long long bubble_sort_test(int *values)
{ 
    int swaps = -1;
    unsigned long long total_swaps = 0;
    
    while (swaps != 0)
    {
        swaps = 0;
        for (int i = 0; i < ARRAY_SIZE - 1; i++)
        {
            if (*(values + i) > *(values + i + 1))
            {
                int temp = *(values + i);
                *(values + i) = *(values + i + 1);
                *(values + i + 1) = temp;
                swaps++;
                total_swaps++;
            }
        }
    }

    return total_swaps;
}

/**
 * Sorts array of n values using selection sort.
 */
unsigned long long selection_sort_test(int *values)
{ 
    unsigned long long total_swaps = 0;
    
    for (int i = 0; i < ARRAY_SIZE - 2; i++)
    {
        int min = i;
        for (int j = i + 1; j < ARRAY_SIZE; j++)
        {
            if (*(values + j) < *(values + min))
            {
                min = j;
            }
        }
        if (min != *(values + i))
        {
            int temp = *(values + min);
            *(values + min) = *(values + i);
            *(values + i) = temp;
            total_swaps++;
        }
    }
    
    return total_swaps;
}

/**
 * Sorts array of n values using insertion sort.
 */
unsigned long long insertion_sort_test(int *values)
{ 
    unsigned long long total_swaps = 0;
    
    for (int i = 1; i < ARRAY_SIZE - 1; i++)
    {
        int k = *(values + i);
        int j = i;
        while (j > 0 && *(values + j - 1) > k)
        {
            int temp = *(values + j - 1);
            *(values + j - 1) = *(values + j);
            *(values + j) = temp;
            j--;
            total_swaps++;
        }
        *(values + j) = k;
    }
    return total_swaps;
}


/**
 * Sorts array of n values using merge sort.
 */
void merge_sort_test(int *values, int start, int end)
{
    if (end > start)
    {
        int middle = (start + end) / 2;

        // sort left half
        merge_sort_test(values, start, middle);

        // sort right half
        merge_sort_test(values, middle + 1, end);

        // merge the two halves
        merge(values, start, middle, middle + 1, end);
    }
}

void merge(int *values, int start_1, int end_1, int start_2, int end_2)
{
    // create temporary array
    int *temp = malloc(sizeof(int) * ARRAY_SIZE);
    
    // track index of the new temp array
    int index = 0;
    
    // declare temp variables to move through each of the two lists while preserving start
    int i = start_1;
    int j = start_2;
    
    // while there elements in each of the two lists, append the smaller value first
    while (i <= end_1 && j <= end_2)
    {
        if (values[i] < values[j])
        {
            temp[index++] = values[i++];
        }
        else
        {
            temp[index++] = values[j++];
        }
    }
    
    // copy remaining elements in the first list
    while (i <= end_1)
    {
        temp[index++] = values[i++];
    }
    
    // copy remaining elements in the first list   
    while (j <= end_2)
    {
        temp[index++] = values[j++];
    }
        
    // transfer elements from temp array back to values array
    for (i = start_1, j = 0; i <= end_2; i++, j++)
    {
        values[i] = temp[j];
    }
    
    free(temp);
}