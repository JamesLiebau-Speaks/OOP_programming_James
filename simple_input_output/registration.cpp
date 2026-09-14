#include <iostream>

namespace student {
    int id;
}
namespace course {
    int id;
}

int main(void){
    std::cout << "Enter a Student ID = ";
    std::cin >> student::id;

    std::cout << "Enter a Course ID = ";
    std::cin >> course::id;
    
    std::cout << "---Registration Information---" << std::endl;
    std::cout << "Student ID: " << student::id << std::endl;
    std::cout << "Course ID: " << course::id << std::endl;

    return 0;
}