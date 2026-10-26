#include "Point.hpp"

Point::Point(int x, int y) : x(x), y(y) {

}

std::string Point::toString() const{
    return "(" + std::to_string(x) + "," + std::to_string(y) + ")";
}

bool Point::operator==(const Point& other){
    return x == other.x && y == other.y;
}

bool Point::operator!=(const Point& other){
    //return x != other.x && y != other.y;
    return !(*this == other);
}

Point Point::operator+(const Point& other){
    return Point(x + other.x, y + other.y);
}
// Point Point::operator-(const Point& other){
//     return Point(x - other.x, y - other.y);
// }
Point Point::operator*(const Point& other){
    return Point(x * other.x, y * other.y);
}

int& Point::operator[](int index){
    if(index == 0){
        return x;
    }
    else{
        return y;
    }
}