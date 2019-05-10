#include "FragTrap.hpp"

int main()
{
    std::cout << "Goodluck Tributes, may the hunger games ever be in your favour" << std::endl;
    
    std::cout << "---------------------------------------" << std::endl;
    FragTrap desire("Desire");
    FragTrap goku("Goku");
    std::cout << "---------------------------------------" << std::endl;
    std::cout << "---------------------------------------" << std::endl;
    desire.rangeAttack(goku.getName());
    goku.takeDamage(desire.getRangedDamage());
    
    std::cout << "---------------------------------------" << std::endl;
    goku.meleeAttack(desire.getName());
    desire.takeDamage(goku.getMeleeDamage());

    std::cout << "-------------Final Round------------------" << std::endl;\
    desire.vaulhunter_dot_exe(goku.getName());
    goku.takeDamage(desire.getRandomDamage());
}