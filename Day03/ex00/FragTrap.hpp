#ifndef _FRAGTRAP_H_
#define _FRAGTRAP_H_

#include <iostream>
#include <string>
#include <ctime> 

class FragTrap
{
private:
    int _hit_pt = 100;
    int _max_hit_pt = 100;
    int _energy_pt = 100;
    int _max_energy_pt = 100;
    int _level = 1;
    std::string name;
    int _melee_atk = 30;
    int _ranged_atk = 20;
    int _odins_wrath = 65;
    int _iron_mans_rep = 85;
    int _cykaBlyat = 100;
    int _armour_dmg = 5;
    int _randomAtk;

    /* data */
public:
    FragTrap(std::string name);
    FragTrap &operator=(FragTrap  const &fragTrap);
    ~FragTrap();
    void meleeAttack(std::string const &target);
    void odinsPower(std::string const &target);
    void ironMan(std::string const &target);
    void russianHitman(std::string const &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    void rangeAttack(std::string const &target);
    std::string getName();
    int getRangedDamage();
    int getRussianDamage();
    int getOdinsDamage();
    int getMeleeDamage();
    int getRandomDamage();
    int getHp();
    int getEp();

    void vaulhunter_dot_exe(std::string const &target);
};
#endif // !_FRAGTRAP_H_