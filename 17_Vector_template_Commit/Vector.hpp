
#ifndef VECTOR_HPP
#define VECTOR_HPP
template <typename T>
class Vector {
public:
    Vector(int capacity = 10);
    // Destructor
    ~Vector();

    // Copy constructor
    Vector(const Vector<T>& other);

    void push_back(const T& val);

    
    bool empty() const; 
    void print() const;
    void pop_back();            // Delete the last element from the vector
    const T& at(int index) const;    // Returns the value at the given index

    int getCapacity() const;

    void clear();
    int getSize() const;
    void push_front(const T& value);
    void insert(int pos, const T& value);

    /*
        If new_size > size - add new elements initialized with val
        If new_size < size - remove extra elements from the end
        If new_size > capacity - allocate new memory
    */

    void resize(int new_size, const T& val);
    
    Vector<T>& operator=(const Vector<T>& other);
private:
    void allocateMemory(const T& new_capacity);      // Allocate a new array of a given capacity
    bool full() const;

    T* data;          // array of int elements
    int size;           // the number of elements in the array
    int capacity;       // the max number of elements array can hold
};

#include "Vector.tpp"

#endif
