#include <iostream>
void printArr(const int* arr, int size);
void doubleArr(int* arr, int size);
int* doubleArrNew(const int * arr, int size);
int main(void) {
    const int SIZE = 5;
    int arr[SIZE] = {1, 2, 3, 4, 5};
    printArr(arr, SIZE);
    
    doubleArr(arr, SIZE);
    printArr(arr, SIZE);
    
    int* new_arr = doubleArrNew(arr,SIZE);
    printArr(new_arr, SIZE);
    // .. Worked with new_arr and don't need it anymore
    delete [] new_arr; // Delete dynamic array

    // for(int i = 0; i < 999999999; i++){
    //     std::cout << i << std::endl;
    //     double* d_arr = new double[999999999];
    //     delete [] d_arr; //dealocate dynamic memory
    // }
    return 0;
}

void printArr(const int* arr, int size) {
    for(int i = 0; i < size; i++) {
        std::cout << arr[i] << ' ';
    }
    std::cout << std::endl;
}

void doubleArr(int* arr, int size){
    for (int i = 0; i< size; i++){
        arr[i] *= 2;
    }
}

int* doubleArrNew(const int * arr, int size){
    //int new_arr[size]; //local array does not work

    int* new_arr = new int[size]; // create an array (pointer = new type;)
    for (int i = 0; i < size; i++){
        new_arr[i] = arr[i] * 2;
    }

    return new_arr;
}