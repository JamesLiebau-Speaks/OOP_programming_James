#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
int main(void){
    std::string input;

    std::cout << "Enter a string: ";
    std::getline(std::cin, input);

    for (int i = 1; i < input.length(); i +=2){
        std::cout << input[i];
    }
    
    std::cout << std::endl;
    return 0;
}