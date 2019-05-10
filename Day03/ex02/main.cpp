#include "ScavTrap.hpp"

int main()
{
    std::cout << "Welcome to Watchpoint Gibraltar" << std::endl;
    
    FragTrap fT1("Desire");
    ScavTrap fT2("Shumba");
    std::cout << "---------------------------------------" << std::endl;
    fT1.rangedAttack(fT2.getName());
    fT2.takeDamage(fT1.getRangedDamage());
    
    std::cout << "---------------------------------------" << std::endl;
    fT2.meleeAttack(fT1.getName());
    fT1.takeDamage(fT2.getMeleeDamage());

    std::cout << "-------------Final Round------------------" << std::endl;\
    fT1.vaulhunter_dot_exe(fT2.getName());
    fT2.takeDamage(fT1.getRandomDamage());

    std::cout << "---------------------------------------" << std::endl;
    fT2.challengeNewcomer(fT1.getName());

    fT1.rangedAttack(fT2.getName());
    fT2.takeDamage(fT1.getRangedDamage());
    
    std::cout << "---------------------------------------" << std::endl;
    fT2.meleeAttack(fT1.getName());
    fT1.takeDamage(fT2.getMeleeDamage());

    fT1.beRepaired(10);
    fT2.beRepaired(24);



}
