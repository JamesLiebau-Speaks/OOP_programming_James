#ifndef POINT_HPP
#define POINT_HPP
#include <string>

class Point{
public:
    Point(int x, int y);

    std::string toString() const;
    // Logical operators
    bool operator==(const Point& other);

    // Subscript operator
    int& operator[](int index);
    bool operator!=(const Point& other);

    // Arithmetic opertor
    Point operator+(const Point& other);
    //Point operator-(const Point& other);
    Point operator*(const Point& other);
private:
int x;
int y;

};

#endif