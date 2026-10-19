// The code for problem 2 goes here
#include <iostream>
#include <string>

namespace noLecture {
    double seconds = (((((16.0 * 3.0)/3.0)*4.5)*60.0)*60.0);
}
namespace lecture {
    double seconds = (((((16.0 - 1.0) * 3.0) - 2.0)*50)*60);
}
int main(void) {
    std::string first;
    std::string last;

    std::cout << "Enter your first name: " << std::endl;
    getline(std::cin, first);

    std::cout << "Enter your last name: " << std::endl;
    getline(std::cin, last);

    std::cout << "First Name: " << first << std::endl;
    std::cout << "Last Name: " << last << std::endl;
    std::cout << "I am supposed to spend " << noLecture::seconds + lecture::seconds << " seconds studying C++ Programming" << std::endl;
    
    return 0;
}