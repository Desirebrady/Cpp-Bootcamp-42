#include "SuperTrap.hpp"

SuperTrap::SuperTrap(std::string name)
{
    std::cout << name <<" I will fix this world" << std::endl;
    this->_Hp = 60;
    this->_maxHp = 60;
    this->_name = name;
    this->_Ep = 120;
    this->_maxEp = 120;
    this->_meleeAtk= 60;
    this->_rangedAtk = 5;
    this->_amourReduc = 0;
}

SuperTrap::~SuperTrap()
{
}


void
SuperTrap::meleeAttack(std::string const &target)
{
	return (FragTrap::rangedAttack(target));
}

void
SuperTrap::rangedAttack(std::string const &target)
{
	return (NinjaTrap::meleeAttack(target));
}
