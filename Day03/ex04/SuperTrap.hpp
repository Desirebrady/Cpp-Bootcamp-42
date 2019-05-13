#ifndef _SUPERTRAP_H_
#define _SUPERTRAP_H_


# include "FragTrap.hpp"
# include "NinjaTrap.hpp"

class SuperTrap: public FragTrap, public NinjaTrap
{
private:
    /* data */
public:
    SuperTrap();
    SuperTrap(std::string name);
    ~SuperTrap();
    void meleeAttack(std::string const &target);
    void rangedAttack(std::string const &target);
};
#endif // !_SUPERTRAP_H_