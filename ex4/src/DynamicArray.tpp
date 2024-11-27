#include "DynamicArray.hpp"
#include <iomanip>

template <typename T>
DynamicArray<T>::DynamicArray() : count(0), size(1) {
    els = new T[size];
}

template <typename T>
DynamicArray<T>::~DynamicArray() {
    delete[] els;
}

template <typename T>
void DynamicArray<T>::resize(int newSize) {
    T* temp = new T[newSize];
    for (int i = 0; i < count; i++) {
        temp[i] = els[i];
    }
    delete[] els;
    els = temp;
    size = newSize;
}

template <typename T>
void DynamicArray<T>::fit() {
    resize(count);
}

template <typename T>
void DynamicArray<T>::add(const T& el) {
    if (count >= RESIZE_THRESHOLD * size) {
        resize(size * 2);
    }
    els[count++] = el;
}

template <typename T>
T DynamicArray<T>::remove(int i) {
    if (i < 0 || i >= count) {
        throw std::out_of_range("Index out of bounds");
    }
    T removed = els[i];
    els[i] = els[--count];
    if (count < REFIT_THRESHOLD * size) {
        fit();
    }
    return removed;
}

template <typename T>
T DynamicArray<T>::get(int i) const {
    if (i < 0 || i >= count) {
        throw std::out_of_range("Index out of bounds");
    }
    return els[i];
}

template <typename T>
void DynamicArray<T>::print() const {
    std::cout << "[";
    for (int i = 0; i < count; i++) {
        std::cout << els[i];
        if (i < count - 1) {
            std::cout << ", ";
        }
    }
    std::cout << "]" << std::endl;
}
