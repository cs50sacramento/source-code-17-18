#include <cs50.h>
#include <stdio.h>

#define NUM_GRADES 5

// function prototypes
int get_grade(string prompt);
double calculate_average(int grades[]);

int main(void)
{
    // declare array to hold 5 grade values and initialize all to 0
    int grades[NUM_GRADES] = { 0 };
    
    // loop through array to store grade values
    for (int i = 0; i < NUM_GRADES; i++)
    {
        grades[i] = get_grade("Enter a grade: ");
    }
    
    double average = calculate_average(grades);
    
    printf("The average of these %d grades is %.2f\n", NUM_GRADES, average);
}

// function definitions
int get_grade(string prompt)
{
    int grade;
    
    do
    {
        printf("%s", prompt);
        grade = get_int();
    }
    while (grade < 0 || grade > 100);
    
    return grade;
}

double calculate_average(int grades[])
{
    int sum = 0;
    
    for (int i = 0; i < NUM_GRADES; i++)
    {
        sum += grades[i];
    }
    
    return (double) sum / NUM_GRADES;
}