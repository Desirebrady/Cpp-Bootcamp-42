#ifndef _WEAPON_H_
#define _WEAPON_H_

#include <iostream>
#include <string>

class Weapon{
    public:
        std::string type;

        Weapon(std::string type);
        ~Weapon();

        std::string getType();
        void setType(std::string type);
};
#endif //_WEAPON_H_