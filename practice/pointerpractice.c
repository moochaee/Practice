#include <stdio.h>
#include <cs50.h>

void swap(int *a, int *b);

int main(void)
{
    int a = 10;
    int b = 50;

    {
    printf("%i %i\n", a, b);
    swap(&a, &b);
    printf("%i %i\n", a, b);
    }
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
