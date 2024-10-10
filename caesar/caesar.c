#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

bool only_digits(string s);
char rotate(char c, int n);

int main(int argc, string argv[])
{
    // Make sure program was run with just one command-line argument
    if (argc == 2 && only_digits(argv[1]))
    {
        // Convert argv[1] from a `string` to an `int`
        int key = atoi(argv[1]);
        // Prompt user for plaintext
        string plaintext = get_string("plaintext: ");
        printf("Ciphertext ");
        for (int i = 0; i < strlen(plaintext); i++)
        {
            printf("%c", rotate(plaintext[i], key));
        }
        printf("\n");
        return 0;
    }
    else
    {
        printf("Usage: ./caesar key\n");
    }
}


    // For each character in the plaintext:

    // Rotate the character if it's a letter



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

    // Rotate the character if it's a letter


char rotate(char c, int n)
{
    if (isupper(c))
    {
        char resultup = (((int) c - 'A' + n) % 26) + 'A';
        return resultup;
    }
    else if (islower(c))
    {
        char resultlo = (((int) c - 'a' + n) % 26) + 'a';
        return resultlo;
    }
    else
    return c;
}
