import random

ranks = ["", "A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K"];
suits = ["♥", "♣", "♠", "♦"];

class Card:
    def __init__(self, suit, rank):
        self.suit = suit
        self.rank = rank

    def __str__(self):
        return f"{ranks[self.rank]} of {suits[self.suit]}"

class Deck:
    def __init__(self):
        self.cards = []
        for s in range(4):
            for r in range(1, 14):
                self.cards.append(Card(s, r))

    def shuffle(self):
        random.shuffle(self.cards)

    def deal_card(self):
        return self.cards.pop()

    def size(self):
        return len(self.cards)
