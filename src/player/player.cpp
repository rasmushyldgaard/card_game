/*
Author: rasmushyldgaard
Date: 20-12-2023
Description:
    Implementation of `Player` class

*/

#include <iostream>
#include <vector>
#include "player.h"


Player::Player(std::string name) : name(name), cards() { }
std::string Player::GetName() { return this->name; }
void Player::AddCard(Card card) { cards.push_back(card); }

int Player::GetResult() {
    int result = 0;

    if (!cards.empty()) {
        for (Card& card : cards) {
            result += card.GetValue();
        }
    }
    else {
        std::cout << this->name << " has no cards and therefore has a score of " << this->GetResult() << std::endl;
    }
    return result;
}

void Player::ShowCards() {
    if (!this->cards.empty()) {
        std::cout << this->name << " shows their hand:" << std::endl;
        for (Card& card : this->cards) {
            std::cout << "  " << card.ToString() << std::endl;
        }
    }
    else {
        std::cout << this->name << " has no cards!" << std::endl;
    }    
}

/*  Comparison operator for Player objects  */ 
bool Player::operator>(Player& other) {
    return (this->GetResult() > other.GetResult());
}
