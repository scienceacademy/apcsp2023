#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
int max(int a[], int n);
int main(int argc, string argv[])
{
    // ./max 1 2 3 4 5
    int size = argc - 1;
    int numbers[size];

    for (int i = 0; i < size; i++)
    {
        numbers[i] = atoi(argv[i + 1]);
    }
    printf("%i\n", max(numbers, size));
}

int max(int a[], int n)
{
    int m = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] > m)
        {
            m = a[i];
        }
    }
    return m;
}
