#include <cs50.h>
#include <stdio.h>

#define GOAL_VALUE      10
#define SNITCH_VALUE    150

// TODO: function prototype
int final_score(int goals, bool snitch);

int main(void)
{
    int goal_num = get_int("Number of times your chasers got the quaffle through a hoop: ");
    bool snitch_caught = get_int("Did your team's seeker catch the snitch? Enter 1 if true, 0 otherwise: ");
    
    int score = final_score(goal_num, snitch_caught);
    
    printf("Your team's final score is: %d\n", score);
}

// TODO: function definition
int final_score(int goals, bool snitch)
{
    int score = 0;
    
    score += goals * GOAL_VALUE;
    
    if (snitch)
    {
        score += SNITCH_VALUE;
    }
    
    return score;
}