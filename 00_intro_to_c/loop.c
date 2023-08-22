#include <stdio.h>

int main(void)
{
    int num = 5;

    // example of a while loop
    int counter = 0;
    while (counter < num)
    {
        printf("?");
        counter++;
    }
    printf("\n");

    // example of a for loop
    for (int j = 0; j < num; j++)
    {
        for (int i = 0; i < num; i++)
        {
            printf("?");
        }
        printf("\n");
    }

    printf("\n");
}