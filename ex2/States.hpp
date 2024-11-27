#ifndef STATES_H
#define STATES_H

#include "AvatarState.hpp"

class Glad : public AvatarState {
public:
    void action() const override;
};

class Happy : public AvatarState {
public:
    void action() const override;
};

class Sad : public AvatarState {
public:
    void action() const override;
};

class Angry : public AvatarState {
public:
    void action() const override;
};

class Grumpy : public AvatarState {
public:
    void action() const override;
};

#endif // STATES_H
