#include "AWeapon.hpp"

AWeapon::AWeapon()
{

}

AWeapon::AWeapon(AWeapon const &src)
{
    *this = src;
    return ;
}

AWeapon::AWeapon(std::string const & name, int apcost, int damage): 
_name(name), _apCost(apcost), _damage(damage)
{

}

AWeapon::~AWeapon()
{
    
}
AWeapon
&AWeapon::operator=(AWeapon const &rhs)
{
    if (this != &rhs)
    {
        this->_damage = rhs._damage;
        this->_apCost = rhs._apCost;
        this->_name = rhs._name;
    }
    return (*this);
}

const std::string AWeapon::getName() const
{
    return(this->_name);
}

int
AWeapon::getAPCost(void) const
{
    return (this->_apCost);
}

int
AWeapon::getDamage(void) const
{
    return (this->_damage);
}