/*
Author: rasmushyldgaard
Date: 20-12-2023
Description:
    Play Card Game

*/

#include <string>
#include <vector>
#include "deck/deck.h"
#include "player/player.h"
#include "game/game.h"


int main() {
    Deck deck;
    int handSize = 5;
    std::vector<std::string> playerNames;
    playerNames.push_back("Steven");
    playerNames.push_back("Bob");
    playerNames.push_back("Melissa");
    
    Game game(deck, playerNames);
    game.Play(handSize);
    game.ShowHands();
    game.DeclareWinner();

    return 0;
}

