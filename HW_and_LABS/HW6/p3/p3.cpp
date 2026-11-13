#include <iostream> 
#include <string>  
template<typename T> bool isGreater(const T* list1, const T* list2, int size1, int size2);  
int main(void) {    
          // test example 1     
          int i_array1[5] = {1, 3, -3, 4, -5};     
          int i_array2[3] = {42, 30, 6};     
          std::cout  << isGreater(i_array1, i_array2, 5, 3) << std::endl;          
          // test example 2     
          double d_array1[2] = {1.57, 3.14159};     
          double d_array2[4] = {1.57, 3.14159, -360, 3};     
          std::cout  << isGreater(d_array1, d_array2, 2, 4) << std::endl;          
          // test example
          std::string s_array1[4] = {"Hgh", "Ojk", "Lmnopq", "Zyx"};     
          std::string s_array2[5] = {"abcd", "ab", "adad", "cat", "fg"};        
          std::cout << isGreater(s_array1, s_array2, 4, 5) << std::endl; 
          return 0; 
}


template<typename T>
bool isGreater(const T* list1, const T* list2, int size1, int size2) {
    for(int i = 0; i < size2; i++){
        for(int j = 0; j < size1; j++){
            if(list2[i] > list1[j]){}
            else{return false;}
        }
    }
    return true;
}
