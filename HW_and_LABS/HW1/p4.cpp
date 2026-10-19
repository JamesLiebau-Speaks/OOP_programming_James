#include <iostream>
#include <iomanip>
#include <cmath>

int main(void){
    double side;
    std::cout << "Enter the side length: ";
    std::cin >> side;
    double area = (6*(side * side))/(4 * tan(M_PI/6));
    std::cout << "The area of the hexagon is " << std::fixed << std::setprecision(2) << area << std::endl;
    return 0;
}