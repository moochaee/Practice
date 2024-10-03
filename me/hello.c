#include <cs50.h>
#include <stdio.h>
// ask for name
int main(void)
{
    string name = get_string("What's your name?\n");
    // greet the user by name
    printf("hello, %s\n", name);
}
