#include <ctype.h>
#include <cs50.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int count_letters(string text);
int count_words(string text);
int count_sentences(string text);

int main(void)
{
    // Prompt the user for some text
    string text = get_string("Text: ");


    // Count the number of letters, words, and sentences in the text

    int letters_calc = count_letters(text);
    int words_calc = count_words(text);
    int sentences_calc = count_sentences(text);

    // Compute the Coleman-Liau index

    float L = ((float)letters_calc/words_calc) * 100;
    float S = ((float)sentences_calc/words_calc) * 100;

    float grade = (0.0588*L)-(0.296*S)-15.8;


    // Print the grade level

    printf("%.2f\n", grade);

}


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
        if (text[i] == ' ')
        {
             words += 1;
        }
    }
    return words;
}

int count_sentences(string text)
{
    // Return the number of words in text
    int sentences = 0;
    int letterlength = strlen(text);
    for (int i = 0; i < letterlength; i++)
    {
        if (text[i] == '.' || text[i] == '!' || text[i] == '?')
        {
             sentences += 1;
        }
    }
    return sentences;
}
