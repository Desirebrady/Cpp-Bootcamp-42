#ifndef _OBJECTFIELD_H_
#define _OBJECTFIELD_H_

#include "SpaceObject.hpp"
class ObjectField {

public:
    void update();
    void erase(size_t);
    std::vector<SpaceObject> getData() const;

    void setBounds(rect);

private:
    rect field_bounds;
    std::vector<SpaceObject> object_set;

};


#endif // !_OBJECTFIELD_H_