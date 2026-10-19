#include "Deck.hpp"
#include <iostream>
#include <random>
#include <vector>
// Constructor
Deck::Deck(int seed) : current_card(0), shuffle_seed(seed) {
    for(int i = 0; i < 13; i++){
        for(int j = 0; j < 4; j++){
            deck.push_back(Card(i,j));
        }

    }

}

// Methods
void Deck::shuffle(){
    // Initialize a random number engine with a seed
    std::mt19937 eng(shuffle_seed);
    // Define a distribution
    std::uniform_int_distribution<int> dist(0, 51);
    // Generate a random value


    for (int i = 0; i < 52; i++){
        int random_val = dist(eng);
        Card temp = deck[i];
        deck[i] = deck[random_val];
        deck[random_val] = temp;
    }
    current_card = 0;
}
Card Deck::dealCard(){
    current_card++;
    return deck[current_card - 1];
}
bool Deck::moreCards() const{
    return current_card < 52;
}