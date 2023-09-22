#include <cs50.h>
#include <stdio.h>

typedef struct
{
    int suit;
    int rank;
} card;

card deck[52];

string ranks[] = {"", "A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K"};
string suits[] = {"♥", "♣", "♠", "♦"};

int main(void)
{
    int n = 0;
    for (int s = 0; s < 4; s++)
    {
        for (int r = 1; r < 14; r++)
        {
            deck[n].suit = s;
            deck[n].rank = r;
            n++;
        }
    }
    printf("%s%s\n", ranks[deck[0].rank], suits[deck[0].suit]);
}
