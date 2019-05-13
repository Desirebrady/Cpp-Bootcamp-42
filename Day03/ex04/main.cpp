#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int main()
{
    std::cout << "Welcome to Watchpoint Gibraltar" << std::endl;
    
    FragTrap fT1("Desire");
    ScavTrap sT1("Shumba");
    NinjaTrap nT1("Hanzo");
    SuperTrap spT1("Thanos");

    std::cout << "------------------------First Round---------------------" << std::endl;
    std::cout << "-----------------FragTrap vs ScavTrap-------------------" << std::endl;
    fT1.rangedAttack(sT1.getName());
    sT1.takeDamage(fT1.getRangedDamage());
    
    std::cout << "-----------------ScavTrap vs FragTrap-------------------" << std::endl;
    sT1.meleeAttack(fT1.getName());
    fT1.takeDamage(sT1.getMeleeDamage());

    std::cout << "-----------------NinjaTrap vs FragTrap------------------" << std::endl;
    
    nT1.meleeAttack(fT1.getName());
    fT1.takeDamage(nT1.getMeleeDamage());

    std::cout << "------------------------Final Round---------------------" << std::endl;
    std::cout << "-----------------FragTrap(ULT) vs ScavTrap--------------" << std::endl;
    fT1.vaulhunter_dot_exe(sT1.getName());
    sT1.takeDamage(fT1.getRandomDamage());

    std::cout << "--------------------------------------------------------" << std::endl;
    std::cout << "-----------------ScavTrap(ULT) vs FragTrap--------------" << std::endl;
    sT1.challengeNewcomer(fT1.getName());

    std::cout << "--------------------------------------------------------" << std::endl;
    std::cout << "-----------------NinjaTrap(ULT) vs ScavTrap-------------" << std::endl;
    nT1.NinjaShoebox(sT1.getName());
    std::cout << "--------------------------HEya----------------------------" << std::endl;
    spT1.vaulhunter_dot_exe(nT1.getName());
    nT1.takeDamage(spT1.getRandomDamage());

    spT1.NinjaShoebox(nT1.getName());
    std::cout << "----------------------Repair----------------------------" << std::endl;
    fT1.beRepaired(10);
    sT1.beRepaired(24);
    return (0);
}
