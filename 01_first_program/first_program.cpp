/*
    First C++ program
    08/19/2026
*/
#include <iostream>

//creat the namespace
namespace oop {
    int courseID = 3337;
}
namespace intro {
    int courseID = 2271;
}

int main(void){
    std::cout << "Hello COP"<< oop::courseID << std::endl;
    
    //std - standard namespace
    //cout - console output (object of iostream class)
    //<< - stream insertion opperator
    //endl - end of line
    return 0;
}