#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>

//Score for each letter of alphabet
int SCORE[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};



int main(void)

    // Prompt the user for two words
    string word1 = get_string("Player 1: ");
    string word2 = get_string("Player 2: ");
