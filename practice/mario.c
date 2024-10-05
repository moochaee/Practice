#include <cs50.h>
#include <stdio.h>

void print_row(int length);
int main(void)

{
    //Get height from user
    int height = get_int("Height ");
    printf("Height entered: %i\n", height); // Debugging line

    for (int i = 0; i < height; i++)
{
    printf("i: %i\n", i); // Debugging line
    print_row(i + 1);
}
}
//print row of user defined # test
void print_row(int length)
{
    printf("length: %i\n", length); // Debugging line
    for (int i = 0; i < length; i++)
    {
        printf("#");
    }
    printf("\n");
}
