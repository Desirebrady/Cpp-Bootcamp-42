#include "Weapon.hpp"
#include<string>

Weapon::Weapon(std::string type)
{
    this->type = type;
}
Weapon::~Weapon()
{
    
}
std::string Weapon::getType()
{
    const std::string &type = this->type;
    return (type);
}

void Weapon::setType(std::string type)
{
    this->type = type;
}