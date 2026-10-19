#ifndef CAR_HPP
#define CAR_HPP
#include <string>

class Car {
public:
    //constructor
    Car();
    Car(std::string make_, std::string model_, int year_, double MPG_, double fuel_capacity_);
    
    //the print method
    void printInfo() const;

    

    void setMake(const std::string& mk);
    void setModel(const std::string& mdl);
    void setYear(int yr);
    void setMPG(double new_mpg);
    void setFuel_cap(const double cap);
    void setFuel_Level(const double lvl);
    void refuel(double gallons);
    void drive (double distance);

    std::string getMake() const;
    std::string getModel() const;
    int getYear() const;
    double getMPG() const;
    double getFuel_level() const;

private:
    std::string make;
    std::string model;
    int year;
    double mpg;
    double mileage;
    double fuel_level;
    double fuel_capacity;
};

#endif
