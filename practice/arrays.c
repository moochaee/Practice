#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int size = 9;
    int sequences[size];

    sequences[0] = 1;
    printf("%i\n", sequences[0]);

    for (int i = 1; i < size; i++)
    {
        sequences[i] = sequences[i-1] * 2;
        printf("%i\n", sequences[i]);
    }
}
