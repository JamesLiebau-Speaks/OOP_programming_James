#include <iostream>
#include <random>


int main(void) {
    // Generating the seed
    int seed;
    int sum;
    int roll = 0;
    int condition;
    int round = 0;
    int exit = 1;

    std::cout << "Enter the seed ";
    std::cin >> seed;
    
    // Initialize a random number engine with a seed
    std::mt19937 eng(seed);

    //Define a distribution
    std::uniform_int_distribution<int> dist(1, 6);

    // Generate a random numbers
    do {
        int x = dist(eng);
        int y = dist(eng);
        if(round == 0){
            roll = x + y;
            condition = roll;
            std::cout << "You rolled " << x << " + " << y << " = " << roll << std::endl;
            if(roll == 7||roll == 11){
                std::cout << "You win" << std::endl;
                break;
            }
            else if(roll == 2||roll == 3||roll == 12){
                std::cout << "You lose" << std::endl;
                break;
            }
            else{
                round++;
                continue;
            }
        }
        else{
            roll = x + y;
            std::cout << "You rolled " << x << " + " << y << " = " << roll << std::endl;
            if(roll == condition){
                std::cout << "You win" << std::endl;
                break;
            }
            else if(roll == 7){
                std::cout << "You lose" << std::endl;
                break;
            }
            else{
                round++;
                continue;
            }
        }
    }while(exit != 0);
    
    return 0;
}
