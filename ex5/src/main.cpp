#include <iostream>
#include <cassert>
#include "geometry_vector.hpp"
#include "physics_vector.hpp"

namespace Geometry {
    void test() {

        Geometry::Vector v1(3.0f, 4.0f);
        
 
        assert(v1.getMagnitude() == 5.0f); 
        
    
        Coordinate pos1 = v1.getPosition();
        assert(pos1.x == 3.0f && pos1.y == 4.0f);
    }
}

namespace Physics {
    void test() {
        Physics::Vector v2(5.0f, 53.13f);
        

        assert(v2.getMagnitude() == 5.0f);
        
        Coordinate pos2 = v2.getPosition();
        assert(fabs(pos2.x - 3.0f) < 0.001f && fabs(pos2.y - 4.0f) < 0.001f); 
    }
}

int main() {
    Geometry::test();
    Physics::test();
    
    std::cout << "Tests passed successfully!" << std::endl;
    
    return 0;
}
