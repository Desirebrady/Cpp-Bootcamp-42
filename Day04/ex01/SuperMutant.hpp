#ifndef _SUPERMUTANT_H_
#define _SUPERMUTANT_H_

#include <iostream>
#include <string>
#include "Enemy.hpp"

class SuperMutant: public Enemy
{
private:
    int _hp;
    std::string _type;
    
public:
    SuperMutant(/* args */);
    SuperMutant(SuperMutant const &src);
    ~SuperMutant();
    SuperMutant &operator=(SuperMutant const &rhs);

    virtual void takeDamage(int damage);
};

#endif // !_SUPERMUTANT_H_