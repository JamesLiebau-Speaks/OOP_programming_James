#ifndef BOX_HPP
#define BOX_HPP

// Template class
template <typename T>
class Box{
public:
    Box(const T& v);

    // Implement getter and setter
    const T& getVal() const;
    void setVal(const T& v);
private:
T value;
};

#include "Box.tpp"

#endif