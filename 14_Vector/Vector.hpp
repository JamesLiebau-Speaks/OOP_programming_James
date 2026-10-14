#ifndef VECTOR_HPP
#define VECTOR_HPP

class Vector {
public:
    Vector(int capacity = 10);

    void push_back(int val);
    void print() const;

private:
    int* data; // array of int elements
    int size; // the number of elements in the array
    int capacity; // the max number of elements array can hold
};

#endif