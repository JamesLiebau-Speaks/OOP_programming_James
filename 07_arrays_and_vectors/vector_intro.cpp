#include <iostream>
#include <vector>

void print(const std::vector<int>& v);
void print_backwards(const std::vector<int>& v);

int main(void){
    //create a vector
    std::vector<int> v; //empty vector(dynamic array) of integers

    //create and initialize
    std::vector<int> v2 {1, 2, 3, 10, 5, 6};
    print(v2);

    //create and provide the size and deafault value
    std::vector<int> v3(10,1);
    print(v3);

    //copy another vector
    std::vector<int> v4(v2);
    print(v4);

    //get the number of elements
    std::cout << "v4 size: " << v4.size() << std::endl;

    //first and Last element
    std::cout << "v2 first: " << v2.front() << std::endl;
    std::cout << "v2 last: " << v2.front() << std::endl;

    //add the element at the end
    v2.push_back(20);
    print(v2);

    //remove from the end
    print(v4);
    v4.pop_back();
    print(v4);

    //iterator - object points to a certain location in the vector
    //begin() - points to the first element
    //end() - points to the last element

    std::cout << *v2.begin() << std::endl;
    std::cout << "here " << *(v2.begin() + 3) << std::endl;
    
    //insert (location (iterator), value)
    v2.insert(v2.begin() + 1, 999);
    print(v2);
    v2.insert(v2.end(), 1000);
    print(v2);

    //Erase (location)
    v2.erase(v2.begin());
    print(v2);

    return 0;
}


void print(const std::vector<int>& v){
    for(int i = 0; i < v.size(); i++){
        std::cout << v.at(i) << " ";
    }
    std::cout << std::endl;
}