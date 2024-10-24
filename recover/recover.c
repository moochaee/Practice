#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

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
    uint8_t buffer[512]
    


        // Create JPEGs from the data
}
