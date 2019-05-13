#ifndef _PEON_H_
#define _PEON_H_

#include "Victim.hpp"

class Peon: public Victim
{
private:
    /* data */
public:
    Peon();
    Peon(std::string name);
    Peon(const Peon &src);
    Peon &operator= (const Peon &rhs);
    virtual void getPolymorphed()const;
    ~Peon();
};

#endif // !_PEON_H_