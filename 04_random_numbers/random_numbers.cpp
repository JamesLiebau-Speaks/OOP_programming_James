#include <iostream>
#include <random>
#include <ctime>
int main(void) {
    //generate the seed
    std::random_device rd;

    std::mt19937 eng(rd());
    
    //define distribution of random numbers
    std::uniform_int_distribution<int> dist(1,100);

    int i = 1;
    int ranSum = 0;
    int avg;
    while (i < 100){
        std::cout << dist(eng) << std::endl;
        i++;
        ranSum = ranSum + dist(eng);
        
    }
    //TODO print the sum and average of the random numbers generated
    
    return 0;
}