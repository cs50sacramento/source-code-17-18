# Quidditch

## Prerequisites
None

## Problem
You want to calculate the final score for a team that has just participated in an exciting quidditch match. Building on the code below, implement a function that takes two variables as input -- an `int` indicating the number of times the team got the Quaffle through the other team's hoops, and a `bool` indicating whether or not they caught the snitch -- and returns that team's final score (what would the return type be?).  

Recall that each "goal" in quidditch is worth 10 points and that catching the snitch is worth 150 points.

## Distribution Code
```c
#include <cs50.h>
#include <stdio.h>

// TODO: function prototype

int main(void)
{
    int goal_num = get_int("Number of times your chasers got the quaffle through a hoop: ");
    bool snitch_caught = get_int("Did your team's seeker catch the snitch? Enter 1 if true, 0 otherwise: ");
    
    int score = final_score(goal_num, snitch_caught);
    
    printf("Your team's final score is: %d\n", score);
}

// TODO: function definition

```