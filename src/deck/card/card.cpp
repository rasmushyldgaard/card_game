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

Card::Card(int number, Suit suit) : number(number), suit(suit) { }
int Card::GetNumber() { return number; }
Card::Suit Card::GetSuit() { return suit; }

/*  Comparison operator for Card objects  */ 
bool Card::operator==(const Card& other) const {
    //return ((this->number == other.number && this->suit == other.suit) ? true : false);
    return (this->number == other.number && this->suit == other.suit);
}
