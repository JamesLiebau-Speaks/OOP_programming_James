#include "Student.hpp"
#include <iostream>

int main(void) {
    Student bob("Bob", 3.1);
    Student alice("Alice", 2.1);
    Student margaret("Margaret", 3.9);

    bob.printStudentInfo();
    alice.printStudentInfo();
    margaret.printStudentInfo();

    for(int i = 1; i < 10; i++){
        Student("test", 1.1);
    }

    std::cout << "Requiered GPA: " << Student::getRequiredGPA() << std::endl;
    std::cout << "Total Students: " << Student::getTotalStudents() << std::endl;
    std::cout << "Average GPA: " << Student::getRequiredGPA() << std::endl;

    return 0;
}