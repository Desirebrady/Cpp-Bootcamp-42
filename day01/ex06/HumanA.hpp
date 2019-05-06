#ifndef _HUMANA_H_
#define _HUMANA_H_

#include <iostream>
#include "Weapon.hpp"

class   HumanA{
    public:
        Weapon &weapon;
        std::string name;

        HumanA(std::string name, Weapon &weapon);
        ~HumanA();
        
        void attack();
};

#endif // !_HUMANA_H_