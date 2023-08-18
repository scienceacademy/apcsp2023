#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int x = get_int("X: ");
    int y = get_int("Y: ");

    if (x > y)
    {
        printf("x is bigger than y\n");
    }
    else if (y > x)
    {
        printf("y is bigger than x\n");
    }
    else
    {
        printf("they're equal\n");
    }
}