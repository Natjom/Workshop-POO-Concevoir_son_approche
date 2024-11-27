#pragma once

#include <cmath>
#include "coordinate.hpp"

namespace Geometry {
    class Vector {
    public:
        float x, y;
        Vector(float x, float y) : x(x), y(y) {}

        // Calcul de la magnitude du vecteur (√(x² + y²))
        float getMagnitude() {
            return std::sqrt(x * x + y * y);
        }

        // Retourne la position sous forme de coordonnées cartésiennes
        Coordinate getPosition() {
            return {x, y};
        }
    };
}
