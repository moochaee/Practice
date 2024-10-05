#include <stdio.h>
#include <cs50.h>

void print_row(int space, int bricks);
void print_left(int left);

int main(void)
{
    // Prompt the user for the pyramid's height
    int n;
    do
    {
        n = get_int("Height: ");
    }
    while (n < 1 || n > 8);

    // Print a pyramid of that height
    for (int i = 0; i < n; i++)
    {
        //Print row of space & bricks
        print_row(n - i - 1 , i + 1);
    }
    for (int i = 0; i < n; i++)
    {
        //Print row of space & bricks
        print_left(i + 1);
    }
}

void print_row(int space , int bricks)
{
     //Print spaces
    for (int i = 0; i < space; i++)
    {
        printf(" ");
    }
    //Print bricks
    for (int i = 0; i < bricks; i++)
    {
        printf("#");
    }
    printf("\n");
}
void print_left(int left)
{

    //Print bricks
    for (int i = 0; i < left; i++)
    {
        printf("#");
    }
    printf("\n");
}
