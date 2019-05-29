#ifndef _SQUAD_H_
#define _SQUAD_H_

#include "ISquad.hpp"

class Squad : public ISquad
{
private:
    int *_units;
    int _unit;
public:
    Squad(/* args */);
    ~Squad();
    Squad   &operator= (const Squad &rhs);
    Squad(const Squad &src);
    int getCount() const;
    ISpaceMarine	*getUnit(int index) const;
};

Squad::Squad(/* args */)
{
}

Squad::~Squad()
{
}

Squad
&Squad::operator=(Squad const &rhs)
{
    if (this != &rhs)
    {
        *this = rhs;
    }
    return (*this);
}

Squad::Squad(Squad const &src)
{
    *this = src;
    return ;
}

int Squad::getCount() const
{
    return (this->_unit);
}



#endif // !_SQUAD_H_