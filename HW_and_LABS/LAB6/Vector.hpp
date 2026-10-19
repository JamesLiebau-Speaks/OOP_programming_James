
#ifndef VECTOR_HPP
#define VECTOR_HPP

class Vector {
public:
    Vector(int capacity = 10);

    ~Vector();

    // Copy constructor
    Vector(const Vector& other);

    void push_back(int val);

    bool full() const;

    bool empty() const;
    
    void clear();

    int getSize() const;

    int getCapacity() const;

    void print() const;

    void push_front(int value);

    void insert(int pos, int value);

    void pop_back();            // Delete the last element from the vector

    int at(int index) const;    // Returns the value at the given index

private:
    void allocateMemory(int new_capacity);      // Allocate a new array of a given capacity

    int* data;          // array of int elements
    int size;           // the number of elements in the array
    int capacity;       // the max number of elements array can hold
};

#endif
