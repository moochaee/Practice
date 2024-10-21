#include <stdio.h>

int main(void)
{
    int calls = 8;
    int *p = &calls;

    {
    printf("%i\n", *p);
    }
}
