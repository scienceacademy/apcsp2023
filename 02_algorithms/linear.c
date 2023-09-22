#include <cs50.h>
#include <stdio.h>
#include <string.h>

typedef struct
{
    string name;
    string number;
}
person;

int main(void)
{
    person people[2];

    people[0].name = "Ava";
    people[0].number = "23423523";
    people[1].name = "Russel";
    people[1].number = "23452323";

    string s = get_string("Name: ");
    for (int i = 0; i < 2; i++)
    {
        if (strcmp(people[i].name, s) == 0)
        {
            printf("Found %s\n", people[i].number);
            return 0;
        }
        print("not found\n");
    }
}