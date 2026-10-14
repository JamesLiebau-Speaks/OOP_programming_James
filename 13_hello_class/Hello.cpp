#include <iostream>
#include <string>

class Hello {
    public:
        Hello() : size(0), messages(nullptr) {
            std::cout << "No arg constructor for " << this << std::endl;
        }

        // Constructor with arguments
        Hello(int size) {
            this->size = size;

            // TODO 
            // create an array of strings with 'size' elements
            
            // Store an array in messages pointer
            // Initialize elements of the array with random strings
            messages = new std::string[size];
            for(int i = 0; i < size; i++){
                messages[i] = (i % 2 == 0) ? "Welcome!" : "Good Bye!";
            }
        }

        ~Hello(){
            std::cout << "The destructor for " << this << std::endl;
            if(messages != nullptr){
                delete [] messages; // deallocate the memory
            }
        }

        void bye() const{
            std::cout << "Bye!!!\n\n";
        }
        void printMessages() const {
            for(int i =0; i < size; i++){
                std::cout << messages[i] << std::endl;
            }
        }
    private:
    int size;
    std::string* messages;
};

int main(void){
    // Create an object dynamically
    Hello* hi = new Hello;

    Hello* hello = new Hello(5);
    // Call Bye method
    hi->bye(); // (*hi).bye();
    hello->printMessages();

    //Delete object (deallocate the memory)
    delete hi;
    delete hello;
    for(int i = 0; i < 9999999; i++){
        Hello(9999999);
    }
}