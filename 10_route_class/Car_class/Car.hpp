#ifndef CAR_HPP
#define CAR_HPP

#include <string>
class Car{
public:
    Car(); // no-arg constructor
    Car(const std::string& mk, const std::string& mdl, int y, double mpg, double fuel_level, double mileage);


    //TODO
    //Implement setters and getters
    std::string getMake() const;
    std::string getModel() const;
    int getYear() const;
    double getMPG() const;
    void printInfo() const;

    //set
    void setMake(const std::string& mk);
    void setModel(const std::string& mdl);
    void setYear(const int yr);
    void setMPG(const double new_mpg);

private:
    std::string make;
    std::string model;
    int year;
    double MPG;
    double mileage;
    double fuel_capacity;
    double fuel_level;
};
#endif