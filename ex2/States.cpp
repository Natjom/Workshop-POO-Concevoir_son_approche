#include "States.hpp"
#include <iostream>

void Glad::action() const { std::cout << ":)" << std::endl; }

AvatarState *Glad::next() const { return new Happy(); }

void Happy::action() const { std::cout << ":D" << std::endl; }

AvatarState *Happy::next() const { return new Sad(); }

void Sad::action() const { std::cout << ":,(" << std::endl; }

AvatarState *Sad::next() const { return new Angry(); }

void Angry::action() const { std::cout << ">:C" << std::endl; }

AvatarState *Angry::next() const { return new Grumpy(); }

void Grumpy::action() const { std::cout << ":/" << std::endl; }

AvatarState *Grumpy::next() const { return new Glad(); }