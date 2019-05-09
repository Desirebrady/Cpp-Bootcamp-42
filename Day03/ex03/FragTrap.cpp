#include "FragTrap.hpp"
#include "ClapTrap.hpp"


FragTrap::FragTrap(std::string name)
{
    ClapTrap(name, 100, 30, 20, 5);
}

FragTrap::~FragTrap()
{
}