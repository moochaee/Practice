#include <cs50.h>
#include <stdio.h>

int main(void)
{
    const int n = 3
    int scores[n];
    for (int i = 0; i < n; i++)
    {
    scores[i] = get_int("Score: ");
    }


    printf("Average: %f\n", (scores[0] + scores[1] + scores[2]) / (float) n);

}
