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
        for (int j = 0; j < width/2; j++)
        {
            // Swap pixels
            RGBTRIPLE temp = image[i][j];
            image[i][j] = image[i][width - 1 - j];
            image[i][width - 1 - j] = temp;

        }
    }
}


// Blur image
// Reflect image horizontally
void blur(int height, int width, RGBTRIPLE image[height][width])
{
    // Create a copy of image
    RGBTRIPLE copy[height][width];
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        copy[i][j] = image[i][j];
        {
            // Check surrounding pixels for Red
            int sumRed = 0, countRed = 0;
            if (i - 1 >= 0 && j - 1 >= 0) { sumRed += copy[i - 1][j - 1].rgbtRed; countRed++; }
            if (i - 1 >= 0) { sumRed += copy[i - 1][j].rgbtRed; countRed++; }
            if (i - 1 >= 0 && j + 1 < width) { sumRed += copy[i - 1][j+1].rgbtRed; countRed++; }
            if (j - 1 >= 0) { sumRed += copy[i][j - 1].rgbtRed; countRed++; }
            sumRed += copy[i][j].rgbtRed; countRed++;
            if (i >= 0 && j + 1 < width) { sumRed += copy[i][j + 1].rgbtRed; countRed++; }
            if (i + 1 < height && j - 1 >= 0) { sumRed += copy[i + 1][j - 1].rgbtRed; countRed++; }
            if (i + 1 < height) { sumRed += copy[i + 1][j].rgbtRed; countRed++; }
            if (i + 1 < height && j + 1 < width){ sumRed += copy[i + 1][j + 1].rgbtRed; countRed++; }


            // Get average for red

            int RGBred = round(sumRed / (float)countRed);

            // Check surrounding pixels for Green
            int sumGr = 0, countGreen = 0;
            if (i - 1 >= 0 && j - 1 >= 0) { sumGr += copy[i - 1][j - 1].rgbtGreen; countGreen++; }
            if (i - 1 >= 0) { sumGr += copy[i - 1][j].rgbtGreen; countGreen++; }
            if (i - 1 >= 0 && j + 1 < width) { sumGr += copy[i - 1][j+1].rgbtGreen; countGreen++; }
            if (j - 1 >= 0) { sumGr += copy[i][j - 1].rgbtGreen; countGreen++; }
            sumGr += copy[i][j].rgbtGreen; countGreen++;
            if (i >= 0 && j + 1 < width) { sumGr += copy[i][j + 1].rgbtGreen; countGreen++; }
            if (i + 1 < height && j - 1 >= 0) { sumGr += copy[i + 1][j - 1].rgbtGreen; countGreen++; }
            if (i + 1 < height) { sumGr += copy[i + 1][j].rgbtGreen; countGreen++; }
            if (i + 1 < height && j + 1 < width){ sumGr += copy[i + 1][j + 1].rgbtGreen; countGreen++; }


            // Get average for Green

            int RGBGreen = round(sumGr / (float)countGreen);

            // Check surrounding pixels for Blue
            int sumBlue = 0, countBlue = 0;
            if (i - 1 >= 0 && j - 1 >= 0) { sumBlue += copy[i - 1][j - 1].rgbtBlue; countBlue++; }
            if (i - 1 >= 0) { sumBlue += copy[i - 1][j].rgbtBlue; countBlue++; }
            if (i - 1 >= 0 && j + 1 < width) { sumBlue += copy[i - 1][j+1].rgbtBlue; countBlue++; }
            if (j - 1 >= 0) { sumBlue += copy[i][j - 1].rgbtBlue; countBlue++; }
            sumBlue += copy[i][j].rgbtBlue; countBlue++;
            if (i >= 0 && j + 1 < width) { sumBlue += copy[i][j + 1].rgbtBlue; countBlue++; }
            if (i + 1 < height && j - 1 >= 0) { sumBlue += copy[i + 1][j - 1].rgbtBlue; countBlue++; }
            if (i + 1 < height) { sumBlue += copy[i + 1][j].rgbtBlue; countBlue++; }
            if (i + 1 < height && j + 1 < width){ sumBlue += copy[i + 1][j + 1].rgbtBlue; countBlue++; }


            // Get average for Blue

            int RGBBlue = round(sumBlue / (float)countBlue);

        }
    }
}







            if(i - 1 >= 0)
            {
                copy[i-1][j];
            }
            else if(j - 1 >= 0)
            {
                copy[i][j - 1];
            }
            else if(i + 1 < height)
            {
                copy[i + 1][j]
            }
            else if(j + 1 < width)
            {
                copy[i][j + 1];
            }


            int RGBred = round(copy[i - 1][j-1].rgbtRed + copy[i-1][j].rgbtRed + copy[i-1][j+1].rgbtRed + copy[i][j - 1].rgbtRed + copy[i][j].rgbtRed + copy[i][j + 1].rgbtRed + copy[i + 1][j - 1].rgbtRed + copy[i + 1][j].rgbtRed + copy[i + 1][j + 1].rgbtRed) / 9.0;
            int RGBGreen = RGBGreen = round(copy[i - 1][j-1].rgbtGreen + copy[i-1][j].rgbtGreen + copy[i-1][j+1].rgbtGreen + copy[i][j - 1].rgbtGreen + copy[i][j].rgbtGreen + copy[i][j + 1].rgbGreen + copy[i + 1][j - 1].rgbtGreen + copy[i + 1][j].rgbtGreen + copy[i + 1][j + 1].rgbtGreen) / 9.0;
            int RGBBlue = RGBBlue = round(copy[i - 1][j-1].rgbtBlue + copy[i-1][j].rgbtBlue + image[i-1][j+1].rgbtBlue + copy[i][j - 1].rgbtBlue + copy[i][j].rgbtBlue + copy[i][j + 1].rgbtBlue + copy[i + 1][j - 1].rgbtBlue + copy[i + 1][j].rgbtBlue + copy[i + 1][j + 1].rgbtBlue) / 9.0;
            image[i][j] = copy[i][j];
