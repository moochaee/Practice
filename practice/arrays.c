#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int sequences[5];

    sequences[0] = 1;
    printf("%i\n", sequences[1]);

    for (int i = 1; i < 5; i++)
    {
        sequences[i] = sequences[i-1] * 2;
        printf("%i\n", sequences[i]);
    }
}
