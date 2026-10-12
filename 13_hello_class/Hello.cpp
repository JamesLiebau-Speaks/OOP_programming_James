#include <iostream>
#include <string>

class Hello {
    public:
        Hello() {
            std::cout << "No arg constructor for " << this << std::endl;
        }

        // Constructor with arguments
        Hello(int size) {
            this->size = size;

            // TODO 
            // create an array of strings with 'size' elements
            // Store an array in messages pointer
            // Initialize elements of the array with random strings
        }

        ~Hello(){
            std::cout << "The destructor for " << this << std::endl;
        }

        void bye() const{
            std::cout << "Bye!!!\n\n";
        }
    private:
    int size;
    std::string* messages;
};

int main(void){
    // Create an object dynamically
    Hello* hi = new Hello;

    // Call Bye method
    hi->bye(); // (*hi).bye();

    //Delete object (deallocate the memory)
    delete hi;
}