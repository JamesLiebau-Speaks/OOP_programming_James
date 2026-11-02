#include "Point.hpp"
#include <iostream>

class LineSegment{
public:
    
private:
    friend std::ostream& operator<<(std::ostream& out, const LineSegment& ls);
    friend std::istream& operator>>(std::istream& in, LineSegment& ls);
    Point start;
    Point end;
};

int main(void){
    LineSegment ls;
    std::cin >> ls;
    std::cout << ls;
}
std::ostream& operator<<(std::ostream& out, const LineSegment& ls){
    out << "Start: " << ls.start << std::endl;
    out << "End: " << ls.end << std::endl;
    //out << "Length: " << ls.length << std::endl;
    return out;
}
std::istream& operator>>(std::istream& in, LineSegment& ls){
    std::cout << "Enter start point: \n";
    std::cin >> ls.start;
    std::cout << "Enter end point: \n";
    std::cin >> ls.end;
    return in;
}