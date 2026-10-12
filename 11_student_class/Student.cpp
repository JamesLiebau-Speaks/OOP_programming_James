#include "Student.hpp" 
#include <iostream>

// Initialize static property (REQUIRED)
double Student::required_gpa = 2.5;
int Student::total_students = 0;
int Student::next_id = 1000;
double Student::total_gpa = 0;

Student::Student(const std::string& n, double st_gpa) : name(n), gpa(st_gpa) {
    total_students++;
    id = "B000" + std::to_string(next_id);
    next_id += 5;
    total_gpa += st_gpa;
}

Student::~Student(){
    std::cout << "Destructor was called\n" << std::endl;
    total_students--;
    total_gpa -= gpa;
}

bool Student::canGraduate() const {
    return gpa >= required_gpa;
}

void Student::printStudentInfo() const {
    std::cout << "Name: " << name << " | GPA: " << gpa;
    std::cout << " | Can graduate: " << (canGraduate() ? "YES" : "NO");
    std::cout << " | ID: " << id << std::endl;

}
double Student::getRequiredGPA(){
    return required_gpa;
}
int Student::getTotalStudents(){
    return total_students;
}
double Student::getAverageGPA(){
    return total_gpa/total_students;
}
// double Student::setGraduationReq(double new_gpa){
    
// }