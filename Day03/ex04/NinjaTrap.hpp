#ifndef  _NINJATRAP_H_
#define  _NINJATRAP_H_

#include <iostream>
#include "FragTrap.hpp"

class NinjaTrap : public virtual ClapTrap
{
private:
    std::string _shoe;
public:
    NinjaTrap();
    NinjaTrap(std::string name);
    void NinjaShoebox(std::string const &target);
    ~NinjaTrap();
};
#endif // ! _NINJATRAP_H_