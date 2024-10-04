#include <cs50.h>
#include <stdio.h>

int main(void)

{
    //Get height from user
    int height = get_int("Height ");

}

void print_row(int length)
{
    for (int i = 0, i < length, i++)
    {
        printf("#");
    }
    printf("\n");
}
