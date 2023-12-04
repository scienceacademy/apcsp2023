void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
    // Loop over all pixels
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {

            // Take average of red, green, and blue
            RGBTRIPLE pixel = image[i][j];
            int avg = round((float) (pixel.rgbtRed + pixel.rgbtGreen + pixel.rgbtBlue) / 3);

            // Update pixel values
            image[i][j].rgbtRed = avg;
            image[i][j].rgbtGreen = avg;
            image[i][j].rgbtBlue = avg;
        }
    }
}
