#include <stdio.h>
#include <cs50.h>
int count_digits(int num);

int main(void)
{
    int num;
    do
    {
        num = get_int("Number: ");
    } while (num <= 0);

    printf("%i\n", count_digits(num));
}

int count_digits(int n)
{
    int count = 0;
// TODO: Your code goes here
    return count;
}