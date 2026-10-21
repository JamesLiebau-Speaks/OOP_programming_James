#include <iostream>
#include <string>
#include "Box.hpp"

template <typename T>
Box<T>::Box(const T& v) : value(v){

}
template <typename T>
const T& Box<T>::getVal() const{
    return value;
}
template <typename T>
void Box<T>::setVal(const T& v){
    value = v;
}

