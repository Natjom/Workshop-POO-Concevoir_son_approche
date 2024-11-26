#include "Avatar.hpp"
#include "States.hpp"

Avatar::Avatar() : state(new Glad()) {}
Avatar::~Avatar() { delete state; }

void Avatar::run() {
    state->action(); // Affiche l'état courant
    AvatarState* nextState = state->next(); // Transition vers l'état suivant
    delete state; // Libération de l'état courant
    state = nextState; // Mise à jour de l'état
}
