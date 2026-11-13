#ifndef CARD_HPP
#define CARD_HPP

#include <iostream>
#include <vector>

class Card{
public:
    // Accessor Functions
    int getFace() const;
    int getSuit() const;

    //Constructor
    Card(int face_num, int suit_num);

    // toString constant function - returns Card as a string
    std::string toString() const;

private:
    int face;
    int suit;
    static std::vector<std::string> faceNames;
    static std::vector<std::string> suitNames;
};

#endif

