#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle():PlasmaRifle::AWeapon("Plasma Rifle", 5, 21)
{

}

PlasmaRifle::PlasmaRifle(PlasmaRifle const &src)
{
    *this = src;
    return ;
}


PlasmaRifle::~PlasmaRifle()
{
}

PlasmaRifle &PlasmaRifle::operator=(const PlasmaRifle &rhs)
{
    if (this != &rhs)
    {
        this->_damage = rhs._damage;
        this->_apCost = rhs._apCost;
        this->_name = rhs._name;
    }
    return(*this);

}

void
PlasmaRifle::attack(void) const
{
    std::cout << "* piouuu piouuu piouuu *" << std::endl;
    return ;
}