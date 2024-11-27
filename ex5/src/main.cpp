#include <iostream>
#include <cassert>
#include "geometry_vector.hpp"
#include "physics_vector.hpp"

namespace Geometry {
    void test() {
        // Création d'un vecteur en coordonnées cartésiennes
        Geometry::Vector v1(3.0f, 4.0f);
        
        // Test de la magnitude du vecteur
        assert(v1.getMagnitude() == 5.0f); // Magnitude de (3, 4) est 5
        
        // Test des coordonnées
        Coordinate pos1 = v1.getPosition();
        assert(pos1.x == 3.0f && pos1.y == 4.0f);
    }
}

namespace Physics {
    void test() {
        // Création d'un vecteur en coordonnées polaires
        Physics::Vector v2(5.0f, 53.13f); // Magnitude 5 et angle ~ 53.13 degrés
        
        // Test de la magnitude
        assert(v2.getMagnitude() == 5.0f);
        
        // Test des coordonnées en cartésiennes (valeurs approximatives)
        Coordinate pos2 = v2.getPosition();
        assert(fabs(pos2.x - 3.0f) < 0.001f && fabs(pos2.y - 4.0f) < 0.001f); // Précision flottante
    }
}

int main() {
    Geometry::test();
    Physics::test();
    
    std::cout << "Tests passed successfully!" << std::endl;
    
    return 0;
}
