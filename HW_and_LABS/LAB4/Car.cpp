#include "Car.hpp"
#include <iostream>
#include <string>

void Car::printInfo() const {
    std::cout << "Make: " << make << std::endl;
    std::cout << "Model: " << model << std::endl;
    std::cout << "Year: " << year << std::endl;
    std::cout << "MPG: " << mpg << std::endl;
    std::cout << "Fuel: " << fuel_level << std::endl;
    std::cout << "Miles: " << mileage << std::endl;
}
void Car::refuel(double gallons){
    std::cout << "Refueling..." << std::endl;
    std::cout << "Fuel added: " << gallons << std::endl;

    double available_space = fuel_capacity - fuel_level;

    if(gallons <= available_space){
        fuel_level += gallons;

        //std::cout << "Fuel added: " << gallons << " gallons" << std::endl;
    }
    else{
        double excess = gallons - available_space;

        fuel_level = fuel_capacity;
        
        //std::cout << "Fuel added: " << available_space << " gallons" << std::endl;
        
        //std::cout << "Excess fuel: " << excess << " gallons" << std::endl;

    }

    std::cout << "Fuel level: " << fuel_level << " gallons" << std::endl;
}

void Car::drive(double distance)
{
    double max_distance = fuel_level * mpg;

    if (distance <= max_distance)
    {
        double fuel_used = distance / mpg;

        fuel_level -= fuel_used;
        mileage += distance;

        std::cout << "Distance covered: "
                  << distance
                  << " miles"
                  << std::endl;

        std::cout << "Fuel level: "
                  << fuel_level
                  << " gallons"
                  << std::endl;
    }
    else
    {
        double distance_covered = max_distance;
        double miles_left = distance - distance_covered;

        mileage += distance_covered;
        fuel_level = 0.0;

        std::cout << "Distance covered: "
                  << distance_covered
                  << " miles ("
                  << miles_left
                  << " miles left)"
                  << std::endl;

        std::cout << "Fuel level: "
                  << fuel_level
                  << " gallons"
                  << std::endl;
    }
}

Car::Car(std::string make_, std::string model_, int year_, double MPG_, double fuel_capacity_){
    setMake(make_);
    setModel(model_);
    setYear(year_);
    setMPG(MPG_);
    setFuel_cap(fuel_capacity_);
}
//Setters
void Car::setMake(const std::string& mk){
    make = mk;
}
void Car::setModel(const std::string& mdl){
    model = mdl;
}
void Car::setYear(int yr){
    year = (yr > 1900 && yr < 2027) ? yr : 1900;
}
void Car::setMPG(double new_mpg){
    mpg = (new_mpg > 0) ? new_mpg : 0;
}
void Car::setFuel_cap(const double cap){
    fuel_capacity = cap;
}
void Car::setFuel_Level(const double lvl){
    fuel_level = (lvl>0)? lvl : 0.0;
}

//getters
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
    return mpg;
}
double Car::getFuel_level() const{
    return fuel_level;
}