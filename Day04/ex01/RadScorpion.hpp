#ifndef _RADSCORPION_H_
#define _RADSCORPION_H_

#include <iostream>
#include <string>
#include "Character.hpp"

class RadScorpion : public Enemy
{
private:
    int _hp;
    std::string _type;
    
public:
    RadScorpion(/* args */);
    RadScorpion(RadScorpion const &src);
    ~RadScorpion();
    RadScorpion &operator=(RadScorpion const &rhs);

    virtual void takeDamage(int damage);
};

#endif