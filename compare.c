#include <stdio.h>
#include <cs50.h>

int main(void)

{
    int x = get_int("What's x? ");
    int y = get_int("What's y? ");
    if(x<y)
    {
    printf("x is less than y\n");
    }
    else if(y<x)
    {
        printf("y is less than x\n");
    }
    else if (x==y)
    {
        printf("y and x are equal\n");
    }
}
