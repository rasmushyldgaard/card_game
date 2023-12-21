/*
Author: rasmushyldgaard
Date: 20-12-2023
Description:
    Implementation of `Game` class

*/

#include<iostream>
#include "game.h"


static void AnnouncePlayerResult(Player);

Game::Game(Deck deck, std::vector<std::string> playerNames) : deck(deck) {
    /*  Create new players based on playerName and add to `Game`  */
    for (std::string& playerName : playerNames) {
        Player player(playerName);
        this->players.push_back(player);
    }
}

void Game::Play(int handSize) {
    int i = 0;

    /*  Deal each player a card until numOfCards has been reached for each player  */
    if (!this->players.empty()) {
        do {
            for(Player& player : this->players) {
                player.AddCard(deck.GetCard());
            }

            if (deck.IsEmpty()) {
                /*  Stop dealing cards if deck is empty  */
                break;
            }
            i++;

        } while(i < handSize);
    }
    else {
        std::cout << "There was no players in this game!" << std::endl;
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
        std::cout << "There was no players in this game!" << std::endl;
    }

}

void Game::DeclareWinner() {
    if (!this->players.empty()) {
        /*  Assume first player is current winner and compare with the rest  */
        Player winner = this->players.front();  

        for(Player& player : this->players) {
            AnnouncePlayerResult(player);
            if (player > winner) {
                winner = player;
            }
        }

        std::cout << "The winner is " << winner.GetName() << " with a score of " << winner.GetResult() << std::endl;
    }
    else {
        std::cout << "There was no players in this game!" << std::endl;
    }

}

static void AnnouncePlayerResult(Player player) {
    std::cout << player.GetName() << " has a score of " << player.GetResult() << " in their hand." << std::endl;
}