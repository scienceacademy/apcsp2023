#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>

// All pdf files start with 4 bytes: 0x25 0x50 0x44 0x46
uint8_t signature[] = {0x25, 0x50, 0x44, 0x46};

int main(int argc, char *argv[])
{
    // check for the correct number of arguments
    if (argc != 2)
    {
        printf("Usage: ./is_pdf <filename>\n");
        return 1;
    }

    // open file
    FILE *input = fopen(argv[1], "r");
    if (input == NULL)
    {
        printf("File not found.\n");
        return 2;
    }

    // read first bytes of file into buffer
    uint8_t buffer[4];
    fread(buffer, 1, 4, input);

    // loop through the buffer, checking for a match
    bool is_pdf = true;
    for (int i = 0; i < 4; i++)
    {
        if (buffer[i] != signature[i])
        {
            is_pdf = false;
        }
        printf("%x ", buffer[i]);
    }
    if (is_pdf)
    {
        printf("\nFile is a PDF.\n");
    }
    else
    {
        printf("\nFile is not a PDF.\n");
    }

    // always remember to close the file
    fclose(input);
}