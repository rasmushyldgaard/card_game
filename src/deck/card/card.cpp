/*
Author: rasmushyldgaard
Date: 20-12-2023
Description:
    Implementation of `Card` class 

*/

#include "card.h"


const int Card::minNum = 1;
const int Card::maxNum = 8;
const int Card::numOfSuits = 4;

static std::string GetSuitName(Card::Suit suit);

Card::Card(int number, Suit suit) : number(number), suit(suit) { }
int Card::GetNumber() { return number; }
Card::Suit Card::GetSuit() { return suit; }
int Card::GetValue() { return (this->number * static_cast<int>(this->suit)); } 

std::string Card::ToString() {
    return GetSuitName(this->suit) + " " + std::to_string(this->number);
}

/*  Comparison operator for Card objects  */ 
bool Card::operator==(const Card& other) const {
    return (this->number == other.number && this->suit == other.suit);
}

static std::string GetSuitName(Card::Suit suit) {
    std::string suitName;

    switch(suit) {
        case Card::Suit::RED:
            suitName = "Red";
            break;
        case Card::Suit::BLUE:
            suitName = "Blue";
            break;
        case Card::Suit::GREEN:
            suitName = "Green";
            break;
        case Card::Suit::YELLOW:
            suitName = "Yellow";
            break;
        default:
            suitName = "";
            break;
    }

    return suitName;
}