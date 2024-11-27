#pragma once

#include <cmath>
#include "coordinate.hpp"

namespace Physics {
    class Vector {
    public:
        float magnitude, angle; // Magnitude et angle en degrés
        Vector(float magnitude, float angle) : magnitude(magnitude), angle(angle) {}

        // Retourne la magnitude
        float getMagnitude() {
            return magnitude;
        }

        // Calcule les coordonnées cartésiennes à partir de la magnitude et de l'angle
        Coordinate getPosition() {
            // Conversion de l'angle en radians
            float angle_rad = angle * (M_PI / 180.0f);
            // Calcul des coordonnées (x = r * cos(θ), y = r * sin(θ))
            return {magnitude * std::cos(angle_rad), magnitude * std::sin(angle_rad)};
        }
    };
}
