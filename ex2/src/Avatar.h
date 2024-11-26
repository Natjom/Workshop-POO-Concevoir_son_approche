#ifndef AVATAR_H
#define AVATAR_H

#include "AvatarState.h"

class Avatar {
private:
    AvatarState* state; // Émotion courante

public:
    Avatar();
    ~Avatar();

    // Affiche l'émotion courante et passe à la suivante.
    void run();
};

#endif // AVATAR_H
