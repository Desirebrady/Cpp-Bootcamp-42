#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    std::cout << "Goodluck Tributes, may the hunger games ever be in your favour" << std::endl;
    
    std::cout << "----------------FragTrap------------------" << std::endl;
    FragTrap fT1("Desire");
    FragTrap fT2("Goku");
    std::cout << "---------------------------------------" << std::endl;
    std::cout << "---------------------------------------" << std::endl;
    fT1.rangeAttack(fT2.getName());
    fT2.takeDamage(fT1.getRangedDamage());
    
    std::cout << "---------------------------------------" << std::endl;
    fT2.meleeAttack(fT1.getName());
    fT1.takeDamage(fT2.getMeleeDamage());

    std::cout << "-------------Final Round------------------" << std::endl;\
    fT1.vaulhunter_dot_exe(fT2.getName());
    fT2.takeDamage(fT1.getRandomDamage());

    std::cout << "--------------ScavTrap Round--------------" << std::endl;
    ScavTrap st1("Bradsyee");
    ScavTrap st2("Jin");
    std::cout << "---------------------------------------" << std::endl;
    std::cout << "---------------------------------------" << std::endl;

    st1.rangeAttack(st2.getName());
    st2.takeDamage(st1.getRangedDamage());

    std::cout << "---------------------------------------" << std::endl;
    st2.meleeAttack(st1.getName());
    st1.takeDamage(st2.getMeleeDamage());

    st1.challengeNewcomer(st2.getChallenge());
}
