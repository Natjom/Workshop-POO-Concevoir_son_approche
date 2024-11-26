#include "Avatar.h"
#include "States.h"
#include <iostream>

void test_states() {
    AvatarState* state = new Glad();
    for (int i = 0; i < 10; ++i) {
        state->action();
        AvatarState* nextState = state->next();
        delete state;
        state = nextState;
    }
    delete state;
}

void test_avatar() {
    Avatar avatar;
    for (int i = 0; i < 10; ++i) {
        avatar.run();
    }
}

int main() {
    std::cout << "=== Debut des tests ===" << std::endl;
    std::cout << "\nTest direct des Etats :\n" << std::endl;
    test_states();
    std::cout << "\nTest de la classe Avatar :\n" << std::endl;
    test_avatar();
    std::cout << "\n=== Fin des tests ===" << std::endl;
    return 0;
}