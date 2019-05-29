#ifndef _ISQUAD_H_
#define _ISQUAD_H_

#include <iostream>
#include <string>
#include "ISpaceMarine.hpp"

class ISquad
{
private:
    int _units;
public:
    public:
        virtual ~ISquad() {} 
        virtual int getCount() const = 0; 
        virtual ISpaceMarine* getUnit(int) const = 0; 
        virtual int push(ISpaceMarine*) = 0;

};

// int ISquad::getCount() const
// {
//     return (this->_units);
// }

// ISpaceMarine *ISquad::getUnit(int unit) const
// {
//     int n = 0;
//     return( &unit[n]);
// }

#endif // !_ISQUAD_H_