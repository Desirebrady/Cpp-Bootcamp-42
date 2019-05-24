#include "SpaceObject.hpp"

SpaceObject::SpaceObject(int nx, int ny) 
{ 
    pos.x = nx; 
    pos.y = ny; 
}

SpaceObject::update() 
{ 
    pos.y += 1;
}

vec2i 
SpaceObject::getPos() const 
{ 
    return pos; 
}