// Implements a dictionary's functionality

#include <ctype.h>
#include <stdbool.h>

#include "dictionary.h"
//Create File
FILE *source;
//Create buffer of max word length +1 for '/0'
    char buffer[LENGTH + 1];

// Represents a node in a hash table
typedef struct node
{
    char word[LENGTH + 1];
    struct node *next;
} node;

// TODO: Choose number of buckets in hash table
const unsigned int N = 101;

// Hash table
node *table[N];

// Returns true if word is in dictionary, else false
bool check(const char *word)
{
    // TODO
    return false;
}

// Hashes word to a number
unsigned int hash(const char *word)
{
    // TODO: Improve this hash function
    int word_char_total = 0;
for (int i = 0; word[i] != '\0'; i++) {
    word_char_total += word[i];
}
int hash = word_total % 101;
return hash;
}


// Loads dictionary into memory, returning true if successful, else false
bool load(const char *dictionary)



{   //Create buffer of max word length +1 for '/0'
    char buffer[LENGTH + 1];

    //Check to see if file can open and be scanned
    if(FILE *source = fopen(dictionary, "r"))
    {
        fscanf(source, "%s", buffer);
        return true;
    }
    // return false if file can't be opened
    else{
        printf("File cannot be opened\n");
        return false;
    }

}

// Returns number of words in dictionary if loaded, else 0 if not yet loaded

// Global variable to track if dictionary is loaded
bool is_loaded = false;

if (is_loaded) {
unsigned int size(void)
{
    if (is_loaded)
    {
        int word_total = 0;
        while (fscanf(source, "%s", buffer) != EOF)
        {
            word_total++;
        }
        return word_total;
    }
    else
    {
        return 0;
    }
}

// Unloads dictionary from memory, returning true if successful, else false
bool unload(void)
{
    // TODO
    return false;
}
