#include <iostream>
#include <string> 
#include "DynamicArray.hpp"

using namespace std;

typedef int ArrayElement;

string array_element_to_string(ArrayElement *el) {
  return to_string(*el);
}

int main() {
  DynamicArray arr;

  int a = 2, b = 3, c = 5;
  
  arr.add(&a);
  arr.add(&b);
  arr.add(&c);

  arr.remove(1);

  arr.print();

  return 0;
}