#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int sequence[5];

    sequence[0] = 1;
    printf("%i\n", sequence[1]);

    for (int i = 1; i < 5; i++)
    {
        sequence[i] = sequence[i] x= 2;
        printf("%i\n", sequence[i]);
    }
}
