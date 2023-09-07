#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    string s = get_string("Name: ");
    int n = strlen(s);
    printf("%i\n", n);
}