#ifndef STATES_H
#define STATES_H

#include "AvatarState.hpp"

class Glad : public AvatarState {
public:
    void action() const override;
    AvatarState* next() const override;
};

class Happy : public AvatarState {
public:
    void action() const override;
    AvatarState* next() const override;
};

class Sad : public AvatarState {
public:
    void action() const override;
    AvatarState* next() const override;
};

class Angry : public AvatarState {
public:
    void action() const override;
    AvatarState* next() const override;
};

class Grumpy : public AvatarState {
public:
    void action() const override;
    AvatarState* next() const override;
};

#endif // STATES_H
