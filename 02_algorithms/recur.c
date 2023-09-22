#include <cs50.h>
#include <stdio.h>
void pyramid(int n);

int main(void)
{
    int height = get_int("height: ");
    pyramid(height);
}

void pyramid(int n)
{
    if (n <= 0)
    {
        return;
    }
    pyramid(n - 1);
    for (int i = 0; i < n; i++)
    {
        printf("#");
    }
    printf("\n");
}
