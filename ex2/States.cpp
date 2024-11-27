#include "States.hpp"
#include <iostream>

void Glad::action() const { std::cout << ":)" << std::endl; }

void Happy::action() const { std::cout << ":D" << std::endl; }

void Sad::action() const { std::cout << ":,(" << std::endl; }

void Angry::action() const { std::cout << ">:C" << std::endl; }

void Grumpy::action() const { std::cout << ":/" << std::endl; }