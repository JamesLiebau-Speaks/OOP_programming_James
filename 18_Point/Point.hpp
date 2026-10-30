#ifndef POINT_HPP
#define POINT_HPP
#include <string>

class Point{
public:
    Point(int x, int y, const std::string& tag);

    std::string toString() const;
    // TODO
    ~Point();
    Point(const Point& other);
    Point& operator=(const Point& other);
    
    // Logical operators
    bool operator==(const Point& other);

    // Subscript operator
    int& operator[](int index);
    bool operator!=(const Point& other);

    // Arithmetic opertor
    Point operator+(const Point& other);
    Point operator-(const Point& other);
    Point operator*(const Point& other);
    Point operator/(const Point& other);
    Point operator%(const Point& other);
    
    // Arithmetic Assignment operators
    Point& operator+=(const Point& other);
    Point& operator*=(const Point& other);
    
    // Preincrament operator
    Point& operator++();
    Point& operator--();
    // Postincrament operator
    Point operator++(int);
    Point operator--(int);
private:
    int x;
    int y;
    char* tag;

};

#endif
