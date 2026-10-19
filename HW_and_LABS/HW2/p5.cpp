#include <iostream>
#include <string>
#include <vector>

std::string my_join(const std::vector<std::string>& words, std::string separ);

int main(void){
    std::vector<std::string> words;
    std::string input;
    std::string separator;
    std::cout << "Enter strings (""exit"" to stop)" << std::endl;
    
    while (true){
        std::cin >> input;
        if(input == "exit"){
            break;
        }
        words.push_back(input);
    }

    std::cout << "Enter the seperator" << std::endl;
    std::cin >> separator;

    std::cout << my_join(words, separator);
}

std::string my_join(const std::vector<std::string>& words, std::string separ){
    std::cout << std::endl;
    std::string joined_string;
    for(int i = 0; i < words.size(); i++){
        //std::cout << words[i] << std::endl;
        if(i==0){
            joined_string = words[i];
        }
        else{
            joined_string = joined_string + words[i];
        }

        if(i == words.size()-1){
            break;
        }
        else{
            joined_string = joined_string + separ;
        }
        
    }
    return joined_string;
}