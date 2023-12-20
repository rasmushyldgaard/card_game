/*
Author: rasmushyldgaard
Date: 20-12-2023
Description:
    Implementation of `Player` class

*/

#include <iostream>
#include "player.h"


Player::Player(std::string name) : name(name), cards() {}
std::string Player::GetName() { return this->name; }
void Player::AddCard(Card card) { cards.push_back(card); }


int Player::GetResult() {
    int result = 0;

    for (Card& card : this->cards) {
        result += (card.GetNumber() * static_cast<int>(card.GetSuit()));
    }

    std::cout << this->name << " has a total value of " << result << " in his hand." << std::endl;
    return result;
}

void Player::ShowCards() {
    std::cout << this->name << " shows his hand:" << std::endl;
    for (Card& card : this->cards) {
        std::cout << "  " << "Card(Number=" << card.GetNumber() << ", Suit=" << static_cast<int>(card.GetSuit()) << ")" << std::endl;
    }
}

/*  Comparison operator for Player objects  */ 
bool Player::operator>(Player& other) {
    return (this->GetResult() > other.GetResult());
}
