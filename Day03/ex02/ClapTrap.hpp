#ifndef _CLAPTRAP_H_
#define _CLAPTRAP_H

#include <iostream>
#include <string>

class ClapTrap
{
protected:
    int _Hp = 100;
    int _maxHp = 100;
    int _maxEp;
    int _amourReduc;
    int _Ep;
    int _meleeAtk;
    int _rangedAtk;
    std::string _name;
    std::string _type;
    

public:
    ClapTrap();
    ClapTrap(std::string name, int ep, int melee, int ranged, int amour);
    ~ClapTrap();
    std::string getName();
    ClapTrap &operator=(ClapTrap  const &ClapTrap);
    void meleeAttack(std::string const &target);
    void rangedAttack(std::string const &target);
    int getHp();
    int getEp();
    int getMeleeDamage();
    int getRangedDamage();
    std::string getChallenge(void);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};

#endif // !_CLAPTRAP_H