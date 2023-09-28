#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct
{
    int rank;
    int suit;
} card;

void shuffle();
card deal_card();

card deck[52];
int top_card = 0;

string ranks[] = {"", "A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K"};
string suits[] = {"♥", "♣", "♠", "♦"};

int main(void)
{
    srand(time(0));
    // initialize deck
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

    shuffle();
    for (int i = 0; i < 5; i++)
    {
        card c = deal_card();
        printf("%s%s\n", ranks[c.rank], suits[c.suit]);
    }
}

// performs a Fisher-Yates shuffle on the deck
void shuffle()
{
    for (int i = 51; i > 0; i--)
    {
        int j = rand() % (i + 1);
        card tmp = deck[i];
        deck[i] = deck[j];
        deck[j] = tmp;
    }
    top_card = 0;
}

card deal_card()
{
    card c = deck[top_card];
    top_card++;
    return c;
}