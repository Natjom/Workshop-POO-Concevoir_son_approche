#include <iostream>
#include "DynamicArray.hpp"

using namespace std;

typedef int ArrayElement;


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