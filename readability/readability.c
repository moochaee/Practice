#include <ctype.h>
#include <cs50.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // Prompt the user for some text
    string text = get_string("Text: ");
}

    // Count the number of letters, words, and sentences in the text

    // Compute the Coleman-Liau index

    // Print the grade level




int count_letters(string text)
{
    // Return the number of letters in text
    int letters = 0;
    int letterlength = strlen(text);
    for (int i = 0; i < letterlength; i++)
    {
        if (isalpha(text[i]))
    {
        letters += 1;

    }
}
}
