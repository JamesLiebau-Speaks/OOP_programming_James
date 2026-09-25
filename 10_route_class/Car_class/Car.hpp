#include <string>
class Car{
public:
    Car(); // no-arg constructor


    //TODO
    //Implement setters and getters
    std::string getMake() const;
    std::string getModel() const;
    int getYear() const;
    double getMPG() const;
    void printInfo() const;

    //set
    void setMake(const std::string&mk);
    //...
private:
    std::string make;
    std::string model;
    int year;
    double MPG;
};