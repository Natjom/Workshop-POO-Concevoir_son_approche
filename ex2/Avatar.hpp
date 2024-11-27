#ifndef AVATAR_H
#define AVATAR_H

#include "AvatarState.hpp"

class Avatar {
private:
    AvatarState* state; 
    Avatar* next = nullptr;      

public:
    Avatar(AvatarState* initialState);
    Avatar(AvatarState* initialState, Avatar* next);
    ~Avatar();
    void run();
    void addState(AvatarState* newState);
    void close();
};

#endif // AVATAR_H
