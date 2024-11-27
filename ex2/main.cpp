#include "Avatar.hpp"
#include "States.hpp"
#include <iostream>

void test_states() {
    // AvatarState* state = new Glad();
    // for (int i = 0; i < 10; ++i) {
    //     state->action();
    //     AvatarState* nextState = state->next();
    //     delete state;
    //     state = nextState;
    // }
    // delete state;
}

void test_avatar() {
    
    AvatarState* s1 = new Glad();
    AvatarState* s2 = new Happy	;
    AvatarState* s3 = new Sad();
    AvatarState* s4 = new Grumpy();
    AvatarState* s5 = new Angry();

    Avatar avatar(s1);
    avatar.addState(s2);
    avatar.addState(s3);
    avatar.addState(s4);
    avatar.addState(s5);
    avatar.close();

    avatar.run();

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