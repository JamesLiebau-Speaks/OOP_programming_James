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
    mileage = 0.0;
    fuel_capacity = 100.0;
    fuel_level = 0.0;
}
Car::Car(const std::string& mk, const std::string& mdl, int y, double mpg, double lvl, double mileage){
    setMake(mk);
    setModel(mdl);
    setYear(y);
    setMPG(mpg);
    setFuel_level(lvl);
}
void Car::printInfo() const{
    std::cout << "Make:\t\t" << make << std::endl;
    std::cout << "Model:\t\t" << model << std::endl;
    std::cout << "Year:\t\t" << year << std::endl;
    std::cout << "MPG:\t\t" << MPG << std::endl;
    std::cout << "Fuel:\t\t" << fuel_level << std::endl;
    std::cout << "Miles:\t\t" << mileage << std::endl;
}
// void Car::refuel(double gallons){
//     std::cout << "Refueling..." << std::endl;
//     std::cout << "Fuel added: "<< gallons << std::endl;

// }
//get
std::string Car::getMake() const{
    return make;
}
std::string Car::getModel() const{
    return model;
}
int Car::getYear() const{
    return year;
}
double Car::getMPG() const{
    return MPG;
}
double Car::getFuel_level() const{
    return fuel_level;
}


//set
void Car::setMake(const std::string& mk){
    make = mk;
}
void Car::setModel(const std::string& mdl){
    model = mdl;
}
void Car::setYear(const int yr){
    year = yr;
}
void Car::setMPG(const double new_mpg){
    MPG = new_mpg;
}

// int main(void){
//     //create a car object
//     car my_car;
//     my_car.printInfo();

//     return 0;
// }