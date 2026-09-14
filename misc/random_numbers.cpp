#include <iostream>
#include <random>


int main(void) {
    // Generating the seed
    std::random_device rd;


    std::mt19937 eng(rd()); // Generate the list of pseudo random numbers (Mersenne Twister)

    //Define a distribution
    std::uniform_int_distribution<int> dist(1, 100);

    int sum = 0;
    for(int i = 0; i < 50; i++) {
        int x = dist(eng);
        sum += x;
        std::cout << x << std::endl;
    }

    std::cout << "The average: " << sum / 50.0 << std::endl;
    
    return 0;
}