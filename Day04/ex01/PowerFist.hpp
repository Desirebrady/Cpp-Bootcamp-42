#ifndef _POWERFIST_H_
#define _POWERFIST_H_

#include <iostream>
#include "AWeapon.hpp"
#include <string>

class PowerFist : public AWeapon
{
    public:
        PowerFist(void);
        PowerFist(const PowerFist &src);
        ~PowerFist(void);

        PowerFist     &operator= (const PowerFist &rhs);

        virtual void  attack(void) const;
};

#endif //  _POWERFIST_H_