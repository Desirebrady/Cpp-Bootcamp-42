#include "RadScorpion.hpp"

RadScorpion::RadScorpion()
{   
    this->_hp = 80;
    this->_type = "RadScorpion";
    std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion(RadScorpion const &src)
{
   *this = src;
   return;
}

RadScorpion::~RadScorpion()
{
    std::cout << "* SPROTCH *" << std::endl;
}

RadScorpion
&RadScorpion::operator=(RadScorpion const &rhs)
{
    if (this != &rhs)
    {
        this->_hp = rhs._hp;
        this->_type = rhs._type;
    }
    return (*this);
}

void
RadScorpion::takeDamage(int damage)
{
    if (this->_hp - damage <= 0 && damage > 0)
    {
        this->_hp = 0;
    }
    else
    {
        this->_hp -= damage;
    }
    return ;
}
