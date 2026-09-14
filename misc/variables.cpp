#include <iostream>
#include <string>


int main(void) {
    int age = 25;               // Integer
    double gpa = 3.14;          // Floating-point
    char grade = 'A';           // Character
    std::string name = "Alice"; // String (requires <string> header)
    bool isActive = true;       // Boolean
    
    std::cout << "Enter the name: ";
    getline(std::cin, name);     
    std::cout << "Enter the gpa: ";
    std::cin >> gpa;
    
    std::cout << "\nName: " << name << std::endl;
    std::cout << "Grade: " << grade << std::endl;
    std::cout << "Age: " << age << std::endl;
    std::cout << "GPA: " << gpa << std::endl;


    return 0;
}