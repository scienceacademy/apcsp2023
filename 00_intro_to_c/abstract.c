#include <stdio.h>
#include <cs50.h>
int get_input();
void print_square(int size);

int main(void)
{
    int num = get_input();
    print_square(num);

}

int get_input()
{
    int num = get_int("How many: ");
    return num;
}

void print_square(int size)
{
    for (int j = 0; j < size; j++)
    {
        for (int i = 0; i < size; i++)
        {
            printf("?");
        }
        printf("\n");
    }

    printf("\n");
}