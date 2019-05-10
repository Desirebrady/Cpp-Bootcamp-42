#ifndef _SCAVTRAP_H_
#define _SCAVTRAP_H_

#include "FragTrap.hpp" 

class ScavTrap : public FragTrap
{
private:
    int _hp = 100;
    int _maxHp = 100;
    int _energyPt = 50;
    int _maxEnergyPt = 50;
    int _meleeAtk = 20;
    int _rangedAtk = 15;
    int _armourDmg = 3;
    std::string _challenge;
    std::string _name;
public:
    ScavTrap(std::string name);
    ~ScavTrap();
    std::string getName();
    std::string getChallenge(void);
    void takeDamage(unsigned int amount);
    void meleeAttack(std::string const &target);
    void rangeAttack(std::string const &target);
    void challengeNewcomer(std::string const &target);
};

#endif // !_SCAVTRAP_H_