#include "helpers.h"
#include <math.h>

// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
    // Loop over all pixels
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        // Take average of red, green, and blue
        {
        int average = round(image[i][j].rgbtRed + image[i][j].rgbtBlue + image[i][j].rgbtGreen) / 3.0;
        // Update pixel values
        image[i][j].rgbtRed = average;
        image[i][j].rgbtBlue = average;
        image[i][j].rgbtGreen = average;
        }
    }

    return;
}

// Convert image to sepia
void sepia(int height, int width, RGBTRIPLE image[height][width])
{
    // Loop over all pixels
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        // Compute Sepia Value
        {
            //Red
        int sepiaRed = round(.393 * image[i][j].rgbtRed + .769 * image[i][j].rgbtGreen + .189 * image[i][j].rgbtBlue);
        sepiaRed = fmin(sepiaRed, 255);
        sepiaRed = fmax(sepiaRed, 0);
            //Green
        int sepiaGreen = round(.349 * image[i][j].rgbtRed + .686 * image[i][j].rgbtGreen + .168 * image[i][j].rgbtBlue);
        sepiaGreen = fmin(sepiaGreen, 255);
        sepiaGreen = fmax(sepiaGreen, 0);
            //Blue
        int sepiaBlue = round(.272 * image[i][j].rgbtRed + .534 * image[i][j].rgbtGreen + .131 * image[i][j].rgbtBlue);
        sepiaBlue = fmin(sepiaBlue, 255);
        sepiaBlue = fmax(sepiaGreen, 0);

        // Update pixel values
        image[i][j].rgbtRed = sepiaRed;
        image[i][j].rgbtBlue = sepiaBlue;
        image[i][j].rgbtGreen = sepiaGreen;
        }
    }

    return;
}

// Reflect image horizontally
void reflect(int height, int width, RGBTRIPLE image[height][width])
{
    // Loop over all pixels
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            // Swap pixels
            
        }
    }
}


// Blur image
void blur(int height, int width, RGBTRIPLE image[height][width])
{
    return;
}
