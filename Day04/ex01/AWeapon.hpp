#ifndef _AWEAPON__H_
#define _AWEAPON__H_

#include <iostream>
#include <string>

class AWeapon
{
protected:
    int _damage;
    int _apCost;
    std::string _name;
public:
    AWeapon(void);
    AWeapon(const AWeapon &src);
    AWeapon(const std::string &name, int apcost, int damage);

    virtual           ~AWeapon(void);

    AWeapon           &operator= (const AWeapon &rhs);

    virtual void      attack(void) const = 0;

    int               getAPCost(void) const;
    int               getDamage(void) const;
    const std::string getName(void) const;
};

#endif