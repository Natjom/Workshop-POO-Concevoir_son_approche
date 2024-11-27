#ifndef DYNAMICARRAY_HPP
#define DYNAMICARRAY_HPP

#include <iostream>
#include <stdexcept>

template <typename T>
class DynamicArray {
private:
    T* els;
    int count;
    int size;

    const float REFIT_THRESHOLD = 0.8;
    const float RESIZE_THRESHOLD = 0.8;

    void resize(int newSize);
    void fit();

public:
    DynamicArray();
    ~DynamicArray();
    void add(const T& el);
    T remove(int i);
    T get(int i) const;
    void print() const;
};

#include "DynamicArray.tpp" // Inclusion des templates
#endif // DYNAMICARRAY_HPP
