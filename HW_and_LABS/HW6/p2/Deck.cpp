#include "Deck.hpp"
#include "Card.hpp"

#include <iostream>
#include <vector>
#include <random>

Deck::Deck(int shuffle_seed) : current_card(0), shuffle_seed(shuffle_seed) {
    for(int i = 0; i < 13; i++){                      
        for(int j = 0; j < 4; j++){                 
            deck.push_back(Card(i, j));        
        } 
    }
}


// shuffle function
void Deck::shuffle() {
    // Initialize a random number engine with a seed
    std::mt19937 eng(shuffle_seed);

    // Define a distribution
    std::uniform_int_distribution<int> dist(0, 51);
    for(int i = 0; i < 52; i++){
        Card tempCard = deck.at(i);
        int random_val = dist(eng);       
        deck.at(i) = deck.at(random_val); 
        deck.at(random_val) = tempCard;   
    }
    current_card = 0;                     
}

// Return next Card object from the deck
Card Deck::dealCard() {
    return deck[current_card++];
}

// Returns bool value of whether there are more cards to deal
bool Deck::moreCards() const {
    return current_card  < 52;
}
