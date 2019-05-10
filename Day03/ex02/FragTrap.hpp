#ifndef _FRAGTRAP_H_
#define _FRAGTRAP_H_

#include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
private:
    int _coalescence = 65;
    int _pulsebomb = 55;
    int _aimbot = 100;
    int _dvaUlt = 100;
    int _highNoon = 60;
    int _randomAtk;
public:
    FragTrap();
    FragTrap(std::string name);
    ~FragTrap();
    FragTrap &operator=(FragTrap const	&rhs);
    int getRussianDamage();
    int getOdinsDamage();
    int getMeleeDamage();
    int getRandomDamage();
    void coalescence(std::string const &target);
    void pulsebomb(std::string const &target);
    void aimbot(std::string const &target);
    void nerfThis(std::string const &target);
    void highNoon(std::string const &target);
    void vaulhunter_dot_exe(std::string const &target);
};
#endif 