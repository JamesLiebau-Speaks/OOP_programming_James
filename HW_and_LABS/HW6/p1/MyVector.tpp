#include "MyVector.hpp"

// What’s this? An empty file? How cruel of me. Good luck!
    template <typename T>
    MyVector<T>::MyVector(int capacity) : size(0), capacity(capacity) {
        elements = new T[capacity];
    }
    // Copy constructor
    template <typename T>
    MyVector<T>::MyVector(const MyVector<T>& other) : size(other.size), capacity(other.capacity) {
        elements = new T[capacity];

        for (int i = 0; i < size; i++) {
            elements[i] = other.elements[i];
        }
    }

    // Destructor
    
    template <typename T>
    MyVector<T>::~MyVector(){
        if (elements) {
            delete [] elements;
        }
    }

    template <typename T>
    void MyVector<T>::print() const{
        std::cout << "[ ";

        for (int i = 0; i < size; i++) {
            std::cout << elements[i] << ' ';
        }
        std::cout << "]\n";
    }
    
    template <typename T>
    void MyVector<T>::push_back(const T& val){
        if (full()) {
            allocateMemory(capacity * 2);
        }
    
        elements[size] = val;
        size++;
    }

    
    template <typename T>
    T MyVector<T>::pop_back(){
        if (empty()) {
            throw "Cannot pop empty vector";
        }
        --size;
        return elements[size];
    }
    template <typename T>
    bool MyVector<T>::empty() const{
        return size == 0;
    }
    template <typename T>
    int MyVector<T>::getCapacity() const{
        return capacity;
    }
    
    template <typename T>
    T& MyVector<T>::at(int index) const{
        if (index < size * -1 || index > size - 1) {
            throw "Invalid index";
        }
        if (index >= 0) {
            return elements[index];
        }
        else {
            return elements[size - (index * -1)];
        }
    }

    template <typename T>
    void MyVector<T>::clear(){
        delete [] elements;
        size = 0;
        capacity = 10;
        
        elements = new T[capacity];
    }

    template <typename T>
    int MyVector<T>::getSize() const{
        return size;
    }
    
    template <typename T>
    void MyVector<T>::push_front(const T& value){
        if (size >= capacity) {
            allocateMemory(capacity * 2);
        }
        for (int i = size; i >= 1; i--) {
            elements[i] = elements[i - 1]; 
        }
        elements[0] = value;
        size++;
    }
    
    template <typename T>
    void MyVector<T>::insert(int pos, const T& value){
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
            elements[i] = elements[i - 1]; 
        }
        elements[pos] = value;
        size++;
    }
    template <typename T>
    void MyVector<T>::erase(int index){
        if (index < 0 || index > size - 1) {
            throw "Invalid index";
        }
        for(int i = index; i < size - 1; i++){
            elements[i] = elements[i + 1];
        }

        size--;
    }
    // void MyVector::remove_dups();

    // Operators
    template <typename T>
    bool MyVector<T>::operator==(const MyVector<T>& other) const{
        if(size == other.size){
            bool equal = true;
            for(int i = 0; i < size; i++){
                if(equal == true){    
                    if(elements[i] == other.elements[i]){
                        equal = true;
                    }
                    else{
                        equal = false;
                    }
                }
                else{break;}
            }
            return equal;
        }
        else{return false;}
    }
    template <typename T>
    bool MyVector<T>::operator!=(const MyVector<T>& other) const{
        if(size == other.size){
            bool equal = true;
            for(int i = 0; i < size; i++){
                if(equal == true){    
                    if(elements[i] == other.elements[i]){
                        equal = true;
                    }
                    else{
                        equal = false;
                    }
                }
                else{break;}
            }
            return !equal;
        }
        else{return true;}
    }
    template <typename T>
    bool MyVector<T>::operator>(const MyVector<T>& other) const{
        if(size > other.size){
            return true;
        }
        else if(size == other.size){
            for(int i = 0; i < size; i++){
                if(elements[i] != other.elements[i]){
                    return elements[i] > other.elements[i];
                }
            }
        }
        return false;
    }
    template <typename T>
    bool MyVector<T>::operator<(const MyVector<T>& other) const{
        if(size < other.size){
            return true;
        }
        else if(size == other.size){
            for(int i = 0; i < size; i++){
                if(elements[i] != other.elements[i]){
                    return elements[i] < other.elements[i];
                }
            }
        }
        return false;
    }
    template <typename T>
    bool MyVector<T>::operator<=(const MyVector<T>& other) const{
        if(size < other.size){
            return true;
        }
        else if(size == other.size){
            for(int i = 0; i < size; i++){
                if(elements[i] != other.elements[i]){
                    return elements[i] <= other.elements[i];
                }
            }
            return true;
        }
        return false;
    }
    template <typename T>
    bool MyVector<T>::operator>=(const MyVector<T>& other) const{
        if(size > other.size){
            return true;
        }
        else if(size == other.size){
            for(int i = 0; i < size; i++){
                if(elements[i] != other.elements[i]){
                    return elements[i] >= other.elements[i];
                }
            }
            return true;
        }
        return false;
    }

    template <typename T>
    MyVector<T> MyVector<T>::operator+(const MyVector<T>& other) const{
        MyVector result(size);
        for(int i = 0; i < size; i++){
            result.push_back(this->elements[i]);
        }
        for(int i = 0; i < other.size; i++){
            result.push_back(other.elements[i]);
        }
        return result;
    }
    
    template <typename T>
    MyVector<T>& MyVector<T>::operator=(const MyVector<T>& other){
        if (this == &other){
            return *this;
        }
        T* new_ele = new T[other.capacity];
        for(int i = 0; i < other.size; i++){
            new_ele[i] = other.elements[i];
        }
        
        delete [] elements;
        elements = new_ele;
        size = other.size;
        capacity = other.capacity;
        
        
        return *this;
    }
    
    template <typename U>
    std::ostream& operator<<(std::ostream& out, const MyVector<U>& v){
        out << "[ ";
        for(int i = 0; i < v.size; i++){
            out << v.elements[i] << " ";
        }
        out << "]" << std::endl;
        return out;
    }

    template <typename T>
    bool MyVector<T>::full() const{
        return size == capacity;
    }
    template <typename T>
    void MyVector<T>::allocateMemory(int memory_size){
        capacity = memory_size;
        // Save the address of an old array
        T* old_data = elements;

        // Allocate the new memory
        elements = new T[capacity];
        
        // Copy the data
        for (int i = 0; i < size; i++) {
            elements[i] = old_data[i];
        }

        // Deallocate the old memory
        delete [] old_data;
    }