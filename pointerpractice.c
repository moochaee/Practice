#include <stdio.h>

int main(void)
{
    int i = 8;
    int *j = &i;
    {
    printf("%i\n", j);
    }
}
