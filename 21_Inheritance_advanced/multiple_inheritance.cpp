#include <iostream>

class Vehicle {
public:
    int vehicle_id = 100;
    Vehicle() {
        std::cout << "Vehicle constructor" << std::endl;
    }
};

class Car : virtual public Vehicle {
public:
    int wheeels = 4;
    Car() {
        std::cout << "Car constructor" << std::endl;
    }
    void drive() const{
        std::cout << "Driving!\n";
    }
};
class Aircraft : virtual public Vehicle {
public:
    int wings = 2;
    Aircraft() {
        std::cout << "Aircraft constructor" << std::endl;
    }
    void fly() const{
        std::cout << "Flying!\n";
    }
};

class FlyingCar : public Car, public Aircraft {
public:

};

int main(void) {
    FlyingCar tesla_roadster;
    tesla_roadster.drive();
    tesla_roadster.fly();

    std::cout << tesla_roadster.vehicle_id<< tesla_roadster.wheeels << tesla_roadster.wings;

    return 0;
}