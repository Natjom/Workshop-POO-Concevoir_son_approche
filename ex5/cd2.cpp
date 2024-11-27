#include <iostream>
#include <list>

using namespace std; 

template<typename T>
class myList {
public:
  void clear() { ; };
};

int main() {
  // std::list<int> m;
  myList<int> m;

  m.clear();
  
  return 0;
}


