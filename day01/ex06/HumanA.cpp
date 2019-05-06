#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon):
        name(name),weapon(weapon)
{

}
HumanA::~HumanA()
{
    
}

void HumanA::attack()
{
    std::cout << this->name << " attacks with his " << weapon.getType() << std::endl;
}