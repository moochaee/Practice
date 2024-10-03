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
        //Print row of space & bricks
        print_row(i + 2 , i + 1);
    }
}

void print_row(int space, int bricks)
{
    for (int i = 0; i < bricks; i++)
    {
        printf("#");
    }
    for (int i = 0; i < space; i++)
    {
        printf(" ");
    }
    printf("\n");
}
