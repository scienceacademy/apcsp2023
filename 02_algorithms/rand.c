#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (void)
{
    srand(time(0));
    for (int i = 0; i < 5; i++)
    {
        // rand() % range + start
        int x = rand() % 6 + 1;
        printf("%i\n", x);
    }
}