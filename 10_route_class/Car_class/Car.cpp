#include <iostream>
#include <string>

#include "Car.hpp"

// class car{
// public:
//     Car(); // no-arg constructor

//     void printInfo() const;
// private:
//     std::string make;
//     std::string model;
//     int year;
//     double MPG;
// };

Car::Car() {
    make = "-";
    model = "-";
    year = 1900;
    MPG = 0.0;
}
void Car::printInfo() const{
    std::cout << "Make:\t\t" << make << std::endl;
    std::cout << "Model:\t\t" << model << std::endl;
    std::cout << "Year:\t\t" << year << std::endl;
    std::cout << "MPG:\t\t" << MPG << std::endl;
}

// int main(void){
//     //create a car object
//     car my_car;
//     my_car.printInfo();

//     return 0;
// }