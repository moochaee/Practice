#include <ctype.h>
#include <cs50.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int count_letters(string text);
int count_words(string text);

int main(void)
{
    // Prompt the user for some text
    string text = get_string("Text: ");
}

    // Count the number of letters, words, and sentences in the text
    int letters = count_letters(text)

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
    return letters;
}

int count_words(string text)
{
    // Return the number of words in text
    int words = 1;
    int letterlength = strlen(text);
    for (int i = 0; i < letterlength; i++)
    {
        if (text[i] == ' ');
    {
        words += 1;
    }
}
    return words;
}

