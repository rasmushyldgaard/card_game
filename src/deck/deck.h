/*
Author: rasmushyldgaard
Date: 20-12-2023
Description:
    Template for `Deck` class

*/

#ifndef __DECK__
#define __DECK__

#include <vector>
#include "card/card.h"


class Deck {
    public:
        Deck();
        Card GetCard();
        bool IsEmpty();

    private:
        std::vector<Card> cards;

};

#endif // __DECK__