#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#define BLOCK_SIZE 512
#define FILENAME_SIZE 8 // e.g., "###.jpg" + null terminator

int main(int argc, char *argv[])
{
    // Accept a single command-line argument
    if (argc != 2)
    {
        printf("Usage: ./recover FILE\n");
        return 1;
    }
    // Open the memory card
    FILE *card = fopen(argv[1], "r");
    if(card == NULL)
    {
    printf("File cannot be opened\n");
    return 1;
    }

    // While there's still data left to read from the memory card
    uint8_t buffer[BLOCK_SIZE]
    int file_number = 0;

    while (fread(buffer, 1, BLOCK_SIZE, card) == BLOCK_SIZE)
        {
        // Create JPEGs from the data
        filename[FILENAME_SIZE];
        sprintf(filename, "%03i.jpg", file_number);
        file_number++;
        // Additional logic to handle JPEG creation
        }


}
