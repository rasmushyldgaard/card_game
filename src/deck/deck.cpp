/*
Author: rasmushyldgaard
Date: 20-12-2023
Description:
    Implementation of `Deck` class

*/

#include <iostream>
#include <algorithm>
#include "deck.h"


static bool IsCardInDeck(const std::vector<Card>&, const Card);

Deck::Deck() : cards() {
    int deckSize = Card::maxNum * Card::numOfSuits;

    /*  Randomize the order of cards in every `Deck` being initialized  */
    srand(time(NULL));  // Generate random seed on every execution
    while (cards.size() < deckSize) {
        int randomNumber = Card::minNum + std::rand() % Card::maxNum;
        Card::Suit randomSuit = static_cast<Card::Suit>(1 + std::rand() % Card::numOfSuits);
        Card card(randomNumber, randomSuit);

        if (!IsCardInDeck(cards, card)) {
            cards.push_back(card);
        }
    }

}

Card Deck::GetCard() {
    Card card = this->cards.front();
    cards.erase(cards.begin());
    return card;
}

bool Deck::IsEmpty() {
    return this->cards.empty();
}

static bool IsCardInDeck(const std::vector<Card>& cards, const Card card) {
    return std::find(cards.begin(), cards.end(), card) != cards.end();
}