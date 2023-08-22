#include <stdio.h>
#include <cs50.h>

int main(void)
{
    char answer = get_char("Agree y/n? "):

    if (answer == 'y' || answer == 'Y')
    {
        printf("Agreed\n");
    }
    else if (answer == 'n' || answer == 'N')
    {
        printf("not agreed\n");
    }
}