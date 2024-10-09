#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stlib.h>

bool only_digits(string s);

int main(int argc, string argv[])
{
    // Make sure program was run with just one command-line argument
    string plaintext = get_string("plaintext: ");

    if (argc == 2 && only_digits(argv[1]))
    {
    int key == atoi(argv[1]);
    printf("%i\n", plaintext);
    return 0;
    }
    else
    {
       printf("Usage: ./caesar key\n");
    }




    // Convert argv[1] from a `string` to an `int`

    // Prompt user for plaintext

    // For each character in the plaintext:

    // Rotate the character if it's a letter
}

 // Make sure every character in argv[1] is a digit
   bool only_digits(string s)
{
    for (int i = 0; i < strlen(s); i++)
    {
        if (!isdigit(s[i]))
        {
            return false;
        }
    }
    return true;
}
