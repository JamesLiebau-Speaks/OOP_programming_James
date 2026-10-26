#include "Vector.hpp"
#include <iostream>
#include <climits> 

template <typename T>
Vector<T>::Vector(int capacity) : size(0), capacity(capacity) {
    data = new T[capacity];
}

template <typename T>
Vector<T>::Vector(const Vector<T>& other) : size(other.size), capacity(other.capacity) {
    data = new T[capacity];

    // Copy the data from the vector other
    for (int i = 0; i < size; i++) {
        data[i] = other.data[i];
    }
}

template <typename T>
Vector<T>& Vector<T>::operator=(const Vector<T>& other){
    delete [] data;
    capacity = other.capacity;
    size = other.size;
    data = new T[other.capacity];

    // Copy the data from the vector other
    for(int i = 0; i < size; i++){
        data[i] = other.data[i];
    }

    return *this;

}

template <typename T>
Vector<T>::~Vector() {
    if (data) {
        delete [] data;
    }
}

template <typename T>
void Vector<T>::print() const {
    std::cout << "[ ";
    // Print the data
    for (int i = 0; i < size; i++) {
        std::cout << data[i] << ' ';
    }
    std::cout << "]\n";
}

template <typename T>
void Vector<T>::push_back(const T& val) {
    if (full()) {
        allocateMemory(capacity * 2);
    }
    
    data[size] = val;
    size++;

}

template <typename T>
bool Vector<T>::full() const {
    return size == capacity;
}

template <typename T>
void Vector<T>::allocateMemory(const T& new_capacity) {
    capacity = new_capacity;
    // Save the address of an old array
    T* old_data = data;

    // Allocate the new memory
    data = new T[capacity];
    
    // Copy the data
    for (int i = 0; i < size; i++) {
        data[i] = old_data[i];
    }

    // Deallocate the old memory
    delete [] old_data;

}

template <typename T>
void Vector<T>::pop_back() {
    if (empty()) {
        return;
    }
    --size;
}

template <typename T>
bool Vector<T>::empty() const {
    return size == 0;
}

template <typename T>
const T& Vector<T>::at(int index) const {
    if (index < size * -1 || index > size - 1) {
        throw "Invalid index";
    }
    if (index >= 0) {
        return data[index];
    }
    else {
        return data[size - (index * -1)];
    }
}

template <typename T>
int Vector<T>::getCapacity() const {
    return capacity;
}

template <typename T>
void Vector<T>::clear() {
    delete [] data;
    size = 0;
    capacity = 10;
    
    data = new T[capacity];
}

template <typename T>
int Vector<T>::getSize() const {
    return size;
}

template <typename T>
void Vector<T>::push_front(const T& value) {
    if (size >= capacity) {
        allocateMemory(capacity * 2);
    }
    for (int i = size; i >= 1; i--) {
        data[i] = data[i - 1]; 
    }
    data[0] = value;
    size++;
}

template <typename T>
void Vector<T>::insert(int pos, const T& value) {
    if (size == 0 && pos == -1) {
        push_back(value);
        return;
    }
    if (pos < size * -1  || pos > size - 1) {
        throw "Invalid index";
    }
    if (size >= capacity) {
        allocateMemory(capacity * 2);
    }
    if (pos < 0) {
        pos = size - (pos * -1);
    }
    for (int i = size; i >= pos; i--) {
        data[i] = data[i - 1]; 
    }
    data[pos] = value;
    size++;
}

/*
    If new_size > size - add new elements initialized with val
    If new_size < size - remove extra elements from the end
    If new_size > capacity - allocate new memory
*/
template <typename T>
void Vector<T>::resize(int new_size, const T& val){
    if(new_size >= capacity){
        allocateMemory(capacity * 2);
    }
    if(new_size > size){
        for(int i = size; i < new_size; i++){
            push_back(val);
        }
        
    }
    else if(new_size < size){
        for(int i = size; i > new_size; i--){
            pop_back();
        }
    }
}
