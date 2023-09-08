#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./caesar <key>\n");
        return 1;
    }
    int key = atoi(argv[1]);
    string plaintext = get_string("Plaintext: ");
    for (int i = 0, n = strlen(plaintext); i < n; i++)
    {
        if (isupper(plaintext[i]))
        {
            printf("%c", encrypt(plaintext[i], 'A', key));
        }
        else if (islower(plaintext[i]))
        {
            printf("%c", encrypt(plaintext[i], 'a', key));
        }
        else
        {
            printf("%c", plaintext[i]);
        }
    }
    printf("\n");
}

char encrypt(char letter, char base, int key)
{
    return (letter - base + key) % 26 + base
}