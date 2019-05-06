#ifndef _HUMANB_H_
#define _HUMANB_H_

#include <iostream>
#include "Weapon.hpp"
#include <string>

class HumanB{
    public:
        Weapon *weapon;
        std::string name;

        HumanB(std::string name);
        ~HumanB();

        void setWeapon(Weapon &weapon);
        void attack();
};
#endif //_HUMANB_H_