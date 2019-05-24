#ifndef _SPACEOBJECT_H_
#define _SPACEOBJECT_H_

#include "game.hpp"
class SpaceObject {

public:
    SpaceObject(int, int);
    void update();

    vec2i getPos() const;
    void setPos(vec2i);
   
private:
    vec2i pos;
};

#endif // DEBUG