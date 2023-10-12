// This program copies one text file to another
// ./fcopy <source_file> <dest_file>

#include <stdio.h>

int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        printf("Usage: ./fcopy infile outfile\n");
        return 1;
    }
    FILE *infile = fopen(argv[1], "r");
    if (infile == NULL)
    {
        printf("File not found.\n");
        return 1;
    }
    FILE *outfile = fopen(argv[2], "w");
    if (outfile == NULL)
    {
        printf("Couldn't create file.\n");
        return 2;
    }
    char c;
    while (1)
    {
        c = fgetc(infile);
        if (c == EOF)
        {
            break;
        }
        fputc(c, outfile);
    }
    fclose(infile);
    fclose(outfile);
}
