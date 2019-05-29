#ifndef _PLASMARIFLE_H_
#define _PLASMARIFLE_H_

#include <iostream>
#include <string>
#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
public:
    PlasmaRifle(void);
    PlasmaRifle(const PlasmaRifle &src);
    ~PlasmaRifle();
    PlasmaRifle &operator=(const PlasmaRifle &rhs);
    virtual void  attack(void) const;
};

#endif //  _PLASMARIFLE_H_