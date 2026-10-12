#ifndef STUDENT_HPP
#define STUDENT_HPP
#include <string>

class Student {
public:
    Student(const std::string& n, double st_gpa);
    //Destructor
    ~Student();

    bool canGraduate() const;
    void printStudentInfo() const;
    static double getRequiredGPA();
    static int getTotalStudents();
    static double getAverageGPA();
    //double setGraduationReq(double new_gpa);
private:
    std::string name;
    double gpa;
    std::string id;
    
    static double required_gpa;     // Graduation requirement
    static int total_students;      // The total number of students
    static int next_id;             // Generate Student ID
    static double total_gpa;
    
};

#endif