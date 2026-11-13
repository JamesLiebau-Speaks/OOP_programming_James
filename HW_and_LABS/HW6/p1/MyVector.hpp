#ifndef MYVECTOR_HPP
#define MYVECTOR_HPP

#include <iostream>

template <typename T>
class MyVector {
public:
    MyVector(int capacity = 10);
    // Copy constructor
    MyVector(const MyVector<T>& other);

    // Destructor
    ~MyVector();

    void print() const;
    void push_back(const T& val);     // Add the new element at the end
    T pop_back();                     // Remove the last element and return its value
    bool empty() const;
    int getCapacity() const;
    T& at(int index) const;
    void clear();
    int getSize() const;
    void push_front(const T& value);
    void insert(int pos, const T& value);
    void erase(int index); 
    // void remove_dups();

    // Operators
    bool operator==(const MyVector& other) const;
    bool operator!=(const MyVector& other) const;
    bool operator>(const MyVector& other) const;
    bool operator<(const MyVector& other) const;
    bool operator<=(const MyVector& other) const;
    bool operator>=(const MyVector& other) const;

    MyVector<T> operator+(const MyVector& other) const;
    MyVector<T>& operator=(const MyVector& other);
    
    template <typename U>
    friend std::ostream& operator<<(std::ostream& out, const MyVector<U>& v);

private:
    T* elements;      // An array of integers
    int size;           // The current number of elements
    int capacity;       // The max number of elements in the array

    bool full() const;
    void allocateMemory(int memory_size);
};

#include "MyVector.tpp"

#endif
