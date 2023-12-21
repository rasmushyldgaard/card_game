/*
Author: rasmushyldgaard
Date: 20-12-2023
Description:
    Template for `Game` class

*/

#ifndef __GAME__
#define __GAME__

#include <string>
#include <vector>
#include "../deck/deck.h"
#include "../player/player.h"


class Game {
    public:
        Game(Deck deck, std::vector<std::string> playerNames);
        void Play(int handSize);
        void ShowHands();
        void DeclareWinner();

    private:
        Deck deck;
        std::vector<Player> players;

};

#endif // __GAME__