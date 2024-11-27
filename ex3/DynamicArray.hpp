#ifndef DYNAMICARRAY_HPP
#define DYNAMICARRAY_HPP

#include <iostream>

using namespace std;

typedef int ArrayElement;

class DynamicArray
{
private:
  int count;
  int size;

  ArrayElement **els;

  const float REFIT_THRESHOLD = 0.8;
  const float RESIZE_THRESHOLD = 0.8;

private:
  void resize(int size);
  void fit();

public:
  DynamicArray();
  DynamicArray(int size);
  int add(ArrayElement *el);

  ArrayElement *remove(int i);
  ArrayElement *get(int i);

  void print();
};

#endif // DYNAMICARRAY_HPP