#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

bool only_digits(string s);

int main(int argc, string argv[])
{
    // Make sure program was run with just one command-line argument
    if (argc == 2 && only_digits(argv[1]))
    // Convert argv[1] from a `string` to an `int`
    {
    int key = atoi(argv[1]);
    // Prompt user for plaintext
    string plaintext = get_string("plaintext: ");
    printf("%s\n", plaintext);
    return 0;
    }
    else
    {
       printf("Usage: ./caesar key\n");
    }



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

    // Rotate the character if it's a letter

    char rotate(char c, int n)
    if (isupper(c))
    {
    c % 26







   char rotate(char c, int n)
    if (isupper(c))
    {
    c -= 'A' + int n + 'A';
    c % 26;
    return char c
    }
    if (islower(c))
    {
    c -= 'a' + int n + 'a';
    c % 26;
    return char c
    }
