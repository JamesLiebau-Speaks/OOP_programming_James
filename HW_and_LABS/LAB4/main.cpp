#include "Car.hpp"

#include <iostream>
Car::Car() {
         make = "-";
         model = "-";
         year = 1900;
         mpg = 0.0;
         mileage = 0.0;
         fuel_capacity = 12.0;
         fuel_level = 0.0;
    }

int main(void) {
     
    Car toyota("Toyota", "Corola", 2020, 23.2, 12.0);
    
    toyota.refuel(5);

    while (toyota.getFuel_level() > 0) {
        double g, d;
        std::cout << "Enter gallons: ";
        std::cin >> g;
        std::cout << "Enter distance: ";
        std::cin >> d;

        toyota.refuel(g);
        toyota.drive(d);
        toyota.printInfo();
    }

    return 0;
}
