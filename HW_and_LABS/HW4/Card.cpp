#include "Card.hpp"
#include <iostream>
// Initialize static members
std::vector<std::string> Card::faceNames { "A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K"};
std::vector<std::string> Card::suitNames {"♥", "♦", "♣", "♠"};


// Card Constructor
Card::Card(int face_num, int suit_num){
    // Fail Safe
    if(face_num > 12 || face_num < 0 || suit_num > 3 || suit_num < 0){
        std::cout << "Invalid face or suit value" << std::endl;
    }
    else{
        face = face_num;
        suit = suit_num;
    }
}

// Accessor Implementation
int Card::getFace() const{
    return face;
}
int Card::getSuit() const{
    return suit;
}
std::string Card::toString() const{
    return faceNames[face] + suitNames[suit];
}