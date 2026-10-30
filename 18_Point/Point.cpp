#include "Point.hpp"
#include <cstring>
Point::Point(int x, int y, const std::string& tag) : x(x), y(y) {
    this->tag = new char[tag.size() + 1];
    strcpy(this->tag, tag.c_str());
}

std::string Point::toString() const{
    return std::string(tag) + ":-(" + std::to_string(x) + "," + std::to_string(y) + ")";
}

bool Point::operator==(const Point& other){
    return x == other.x && y == other.y;
}

bool Point::operator!=(const Point& other){
    //return x != other.x && y != other.y;
    return !(*this == other);
}

Point Point::operator+(const Point& other){
    return Point(x + other.x, y + other.y, tag);
}
// NEW v
Point Point::operator-(const Point& other){
    return Point(x - other.x, y - other.y, tag);
}
Point Point::operator/(const Point& other){
    return Point(x / other.x, y / other.y, tag);
}
Point Point::operator%(const Point& other){
    return Point(x % other.x, y % other.y, tag);
}
Point& Point::operator++(){
    x += 1;
    y += 1;
    return *this;
}
Point Point::operator++(int ){
    // Create the copy of the current point
    Point temp(*this);
    x += 1;
    y += 1;
    return temp;
}
Point& Point::operator+=(const Point& other){
    x += other.x;
    y += other.y;
    
    //*this = *this + other;
    return *this;
}

Point& Point::operator*=(const Point& other){
    x *= other.x;
    y *= other.y;
    return *this;
}
Point& Point::operator--(){
    x -= 1;
    y -= 1;
    return *this;
}
Point Point::operator--(int){
    Point temp(*this);
    x -= 1;
    y -= 1;
    return temp;
}
// NEW ^
Point Point::operator*(const Point& other){
    return Point(x * other.x, y * other.y, tag);
}

int& Point::operator[](int index){
    if(index == 0){
        return x;
    }
    else{
        return y;
    }
}
