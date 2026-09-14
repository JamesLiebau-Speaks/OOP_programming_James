#include <iostream>
#include <string>

int main(void) {
    std::string name;
    std::string animal;

    std::cout << "Enter your name: ";
    getline(std::cin, name);
    std::cout << "Enter your favorite animal: ";
    getline(std::cin, animal);
    
    std::string introduction = "Agent, " + name;
    introduction += ", also known as The " + animal + ".";

    std::cout << '\n' << introduction << '\n';
    int intro_size = introduction.length();
    std::cout << "your identity contains " << introduction.length() << " characters" << std::endl;

    if (intro_size >50) {
        std::cout << "Your Identity is too long\n";
    }
    else{
        std::cout << "Your secret identity is fine\n";
    }

    return 0;
}