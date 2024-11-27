#include <iostream>
#include <string>
#include "DynamicArray.hpp"

int main() {
    DynamicArray<std::string> array;

    array.add("Hello");
    array.add("World");

    array.print();

    array.remove(0);
    array.print();

    return 0;
}
