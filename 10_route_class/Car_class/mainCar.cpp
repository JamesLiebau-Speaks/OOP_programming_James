#include <iostream>
#include <string>


#include "Car.hpp"
#include "CarDealer.hpp"

int main(void){
    //create a car object
    Car my_car;
    my_car.printInfo();

    my_car.setMake("Ferrari");
    my_car.setModel("F50");
    my_car.setYear(2015);
    my_car.setMPG(10.2);

    my_car.printInfo();


 // Create cars with constructor with arguments
    Car ferrari_spider("Ferrari", "Spider", 2021, 17.3, 5.0, 15.0);
    Car ferrari_gt("Ferrari", "Super GT", 2020, 13.3, 7.0, 14.0);

    // Create a car dealer object
    CarDealer ferrari_lakeland;

    ferrari_lakeland.addCar(my_car);
    ferrari_lakeland.addCar(ferrari_spider);
    ferrari_lakeland.addCar(ferrari_gt);

    ferrari_lakeland.showInventory();

    // Print the oldest car at the Dealer

    return 0;
}