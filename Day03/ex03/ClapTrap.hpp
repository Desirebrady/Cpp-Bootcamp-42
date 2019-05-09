#ifndef _CLAPTRAP_H_
#define _CLAPTRAP_H

#include <iostream>
#include <string>

class ClapTrap
{
private:
    int _Hp = 100;
    int _maxHp = 100;
    int _maxEp;
    int _amourReduc;
    int _Ep;
    int _meleeAtk;
    int _rangedAtk;
    std::string _name;

public:
    ClapTrap();
    ClapTrap(std::string name, int ep, int melee, int ranged, int amour);
    ~ClapTrap();
    std::string getName();
    void meleeAttack(std::string const &target);
    void rangedAttack(std::string const &target);
    int getHp();
    int getEp();
    int getMeleeDamage();
    int getRangedDamage();
    void takeDamage(unsigned int amount);
};

#endif // !_CLAPTRAP_H