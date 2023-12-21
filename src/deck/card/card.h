/*
Author: rasmushyldgaard
Date: 20-12-2023
Description:
    Template for `Card` class

*/

#ifndef __CARD__
#define __CARD__

#include <string>


class Card {
    public:
        static const int minNum;
        static const int maxNum;
        static const int numOfSuits;

        enum class Suit {
            RED = 1,
            BLUE = 2,
            GREEN = 3,
            YELLOW = 4
        };

        Card(int number, Suit suit);
        int GetNumber(void);
        Suit GetSuit(void);
        int GetValue(void);
        std::string ToString();
        bool operator==(const Card& other) const;

    private:
        int number;
        Suit suit;

};

#endif // __CARD__