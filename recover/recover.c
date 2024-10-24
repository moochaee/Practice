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



    // Declare
    uint8_t buffer[BLOCK_SIZE];
    int file_number = 0;
    bool is_writing = false;
    FILE *img = NULL;
    filename[FILENAME_SIZE];

// While there's still data left to read from the memory card
while (fread(buffer, 1, BLOCK_SIZE, card) == BLOCK_SIZE) {
    // Check for JPEG
    if (buffer[0] == 0xff && buffer[1] == 0xd8 && buffer[2] == 0xff && (buffer[3] & 0xf0) == 0xe0) {
        if (img != NULL) {
            fclose(img);
        }
        // Create new file
        sprintf(filename, "%03i.jpg", file_number++);
        img = fopen(filename, "w");
        is_writing = true;
    }

    if (is_writing) {
        fwrite(buffer, 1, BLOCK_SIZE, img);
    }
}
