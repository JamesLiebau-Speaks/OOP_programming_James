#include <iostream>
#include <cmath>


int main(void){
    int input1;
    std::cout << "Enter an integer number to see if the given number is divisible by 4 or not: ";
    std::cin >> input1;

    if (input1 > 100){
        std::cout << "The entered number is greater than 100 and square root of the number is " << std::sqrt(input1) << std::endl;
    }

    else if (input1 < 0){
        std::cout << "The program does not accept negative numbers" << std::endl;
    }

    else if (input1 % 4 == 0){
        std::cout << "The given number (" << input1 << ") is divisible by 4" << std::endl;
        std::cout << "Quotient: " << input1 / 4 << std::endl;
        std::cout << "Remainder: " << input1 % 4 << std::endl;
    }

    else{
        std::cout << "The given number (" << input1 << ") is not divisible by 4" << std::endl;
        std::cout << "Quotient: " << input1 / 4 << std::endl;
        std::cout << "Remainder: " << input1 % 4 << std::endl;
    }
    return 0;
}