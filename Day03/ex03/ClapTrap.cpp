#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name, int ep, int melee, int ranged, int amour)
{
    this->_name = name;
    this->_Ep = ep;
    this->_meleeAtk = melee;
    this->_rangedAtk = ranged;
    this->_amourReduc = amour;
}

ClapTrap::~ClapTrap()
{
}

void ClapTrap::meleeAttack(std::string const &target)
{
    std::cout << getName() 
              << " attacks "
              << target
              << " with a melee attack causing " 
              << this->_meleeAtk
              << std::endl;
}

void ClapTrap::rangedAttack(std::string const &target)
{
    std::cout << getName() 
              << " attacks "
              << target
              << " with a ranged attack causing "
              << this->_rangedAtk
              << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    this->_Hp -= amount;
    std::cout << getName() << " has "
              << this->_Hp
              << " remaining" 
              << std::endl;
}

std::string ClapTrap::getName()
{
    return (this->_name);
}

int ClapTrap::getEp()
{
    return (this->_Ep);
}

int ClapTrap::getHp()
{
    return (this->_Hp);
}

int ClapTrap::getMeleeDamage()
{
    return (this->_meleeAtk);
}

int ClapTrap::getRangedDamage()
{
    return (this->_rangedAtk);
}

