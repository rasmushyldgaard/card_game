/*
Author: rasmushyldgaard
Date: 20-12-2023
Description:
    Template for `Player` class

*/

#ifndef __PLAYER__
#define __PLAYER__

#include <string>
#include <vector>
#include "../deck/card/card.h"


class Player {
    public:
        Player(std::string name);
        std::string GetName();
        void AddCard(Card card);
        int GetResult();
        void ShowCards();
        bool operator>(Player& other);

    private:
        std::string name;
        std::vector<Card> cards;

};

#endif // __PLAYER__