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
    int numOfCards = 5;
    std::vector<std::string> playerNames;
    playerNames.push_back("Steven");
    playerNames.push_back("Bob");
    playerNames.push_back("Melissa");
    
    Player winner("");
    Game game(deck, playerNames);
    game.Play(numOfCards);
    game.ShowHands();
    game.DeclareWinner();

    return 0;
}

