#include <stdio.h>
#include <cs50.h>

void print_row(int space , int bricks, int spacer, int bricksr);

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
    const int GAP = 2;
    for (int i = 0; i < n; i++)
    {
        //Print row of space & bricks
        print_row(n - i - 1 , i + 1, GAP, i + 1);
    }

}

void print_row(int space , int bricks, int spacer, int bricksr)
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
 //Print gap between pryamid
    {
        printf("  ");
    }
    //Print bricks of right facing pyramid
    for (int i = 0; i < bricksr; i++)
    {
        printf("#");
    }

    printf("\n");
}
