#ifndef AVATAR_STATE_H
#define AVATAR_STATE_H

class AvatarState {
public:
    virtual ~AvatarState() = default;
    virtual void action() const = 0;
};

#endif // AVATAR_STATE_H
