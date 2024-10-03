#include <stdio.h>
#include <cs50.h>

void print_row(int space, int bricks);

int main(void)
{
    // Prompt the user for the pyramid's height
    int n;
    do
    {
        n = get_int("Height: ");
    }
    while (n < 1);

    // Print a pyramid of that height
    for (int i = 0; i < n; i++)
    {
        //Print row of bricks
        print_row(i + 1, i - 1);
    }
}

void print_row(int space, int bricks)
{
    for (int i = 0; i < bricks; i++)
    {
        printf("#");
    }
    for (int i = 0; i < spaces; i++)
    {
        printf(" ");
    }
    printf("\n");
}
