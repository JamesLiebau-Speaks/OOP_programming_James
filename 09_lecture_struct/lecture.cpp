#include <iostream>
#include <string>

struct Lecture {
    std::string title;
    int duration; //duration in seconds

    //define the method of the structure
    void print() {
        std::cout << "Title:\t\t" << title << std::endl;
        std::cout << "Duration:\t" << duration / 60 << " minutes ";
        std::cout << " and " << duration % 60 << " seconds" << std::endl; 
        std::cout << "Long Lecture:\t" << (isLongLecture() ? "YES" : "NO") << std::endl;
    }
    bool isLongLecture(){
        return{duration > 60 * 60};
    }
};

void printLecture(const Lecture& lec);
Lecture createLecture(const std::string& title, int minutes);

int main(void) {
    int a;
    Lecture oop;

    //intitialize the members of the Lecture object (variable)
    oop.title = "Classes and Objects";
    oop.duration = 50*60;

    std::cout << oop.title << " " << oop.duration << std::endl;


    Lecture math {"Graphs", 75 * 60};
    //printLecture(math);
    math.print();

    Lecture english = createLecture("Alphabet", 35);
    english.print();

    return 0;
}

void printLecture(const Lecture& lec){
    std::cout << "Title:\t\t" << lec.title << std::endl;
    std::cout << "Duration:\t" << lec.duration / 60 << " minutes ";
    std::cout << " and " << lec.duration % 60 << " seconds" << std::endl;
}

Lecture createLecture(const std::string& title, int minutes){
    //create Lecture object
    Lecture lecture;
    lecture.title = title;
    lecture.duration = minutes * 60;
    
    return lecture;
}