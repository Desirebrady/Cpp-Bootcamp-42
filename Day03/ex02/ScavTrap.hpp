#ifndef _SCAVTRAP_H_
#define _SCAVTRAP_H_

#include "FragTrap.hpp"

class ScavTrap: public ClapTrap
{
private:
    std::string _challenge;
public:
    ScavTrap();
    ScavTrap(std::string name);
    ~ScavTrap();
    std::string getChallenge(void);
    void challengeNewcomer(std::string const &target);
};
#endif // _SCAVTRAP_H_