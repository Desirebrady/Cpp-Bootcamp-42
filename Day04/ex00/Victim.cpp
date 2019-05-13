#include "Victim.hpp"

Victim::Victim()
{
}
Victim::Victim(std::string name): _name(name)
{
    std::cout << "Some random victim called " << name << " just pooped up!" << std::endl;
}   

Victim::~Victim()
{
    std::cout << "Victim " << this->_name << " just died for no apparent reason!" << std::endl;
}

Victim
&Victim::operator= (const Victim &rhs)
{
    if (this != &rhs)
    {
      this->_name = rhs._name;
    }
    return (*this);
}

Victim::Victim(const Victim &src)
{
    *this = src;
    return ;
}

std::ostream
&operator<< (std::ostream &out, const Victim &target)
{
    out << "Im " << target.getName() << " and I like otters!" << std::endl;
    return (out);
}

void Victim:: getPolymorphed() const
{
    std::cout << this->_name << " has been turned into a cute little sheep!" << std::endl;
}

std::string
Victim::getName(void) const
{
    return (this->_name);
}