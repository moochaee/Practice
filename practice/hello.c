#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string first_name = get_string("What is your first name? ");
    int age = get_int("What is your age? ");
    double phone_number = get_double("What is your phone number? ");


    printf("%s %i %f\n", first_name, age, phone_number);
}
