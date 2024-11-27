#include "Avatar.hpp"
#include "AvatarState.hpp"
#include <iostream>

Avatar::Avatar(AvatarState* initialState)
    : state(initialState) {}

Avatar::Avatar(AvatarState* initialState, Avatar* next)
    : state(initialState), next(next) {}

Avatar::~Avatar() {
    delete state;    
    delete next;    
}

void Avatar::run() {
    if (state) {
        state->action(); 
    }
    if (next) {
        next->run();
    }
}

void Avatar::addState(AvatarState* newState) {
    if (next) {
        next->addState(newState); 
    } else {
        next = new Avatar(newState); 
    }
}

void Avatar::close() {
    Avatar* current = this;

    while (current->next && current->next != this) {
        current = current->next;
    }
    current->next = this;
}