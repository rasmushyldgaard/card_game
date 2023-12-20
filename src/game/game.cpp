/*
Author: rasmushyldgaard
Date: 20-12-2023
Description:
    Implementation of `Game` class

*/

#include<iostream>
#include "game.h"


Game::Game(Deck deck, std::vector<std::string> playerNames) : deck(deck) {
    /*  Create new players based on playerName and add to `Game`  */
    for (std::string& playerName : playerNames) {
        Player player(playerName);
        this->players.push_back(player);
    }
}

void Game::Play(int numOfCards) {
    int i = 0;

    /*  Deal each player a card until numOfCards has been reached for each player!  */
    if (!this->players.empty()) {
        do {
            for(Player& player : this->players) {
                player.AddCard(deck.GetCard());
            }
            i++;

        } while(i < numOfCards);
    }
    else {
        // TODO: Should be some way to handle if no players.
    }

}

void Game::ShowHands() {
    if (!this->players.empty()) {
        for(Player& player : this->players) {
            player.ShowCards();
            std::cout << "\n" << std::endl;
        }
    }
    else {
        // TODO: Should be some way to handle if no players.
    }

}

void Game::DeclareWinner() {
    if (!this->players.empty()) {
        Player winner = this->players.front();

        for(Player& player : this->players) {
            if (player > winner) {
                winner = player;
            }
        }

        std::cout << "The winner is " << winner.GetName() << " with a score of " << winner.GetResult() << std::endl;
    }
    else {
        // TODO: Should be some way to handle if no players.
    }

}

