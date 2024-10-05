#include <cs50.h>
#include <stdio.h>

//Constant
const int N = 3;

// Prototype
float average (int length, int array[]);

int main(void)
{
    //Get scores
    int scores[N];
    for (int i = 0; i < N; i++)
    {
    scores[i] = get_int("Score: ");
    }


    printf("Average: %f\n", (scores[0] + scores[1] + scores[2]) / (float) N);

}

float average (int length, int array[])
{
    //Calculate average
    int sum = 0
    for (int i = 0; i < length; i++)
    {
        sum += array[i];
    }
    return sum / (float) length;
}
