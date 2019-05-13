#include "Sorcerer.hpp"

Sorcerer::Sorcerer()
{

}

Sorcerer::Sorcerer(std::string name, std::string title): _name(name), _title(title)
{
    std::cout << name << ", " << title << " is born"<< std::endl;
}

Sorcerer::~Sorcerer()
{
    std::cout << this->_name << ", " << this->_title << " is dead. Consequences will never be the same !"<< std::endl;
}

Sorcerer::Sorcerer(const Sorcerer &src)
{
    *this = src;
    return ;
}

Sorcerer
&Sorcerer::operator= (const Sorcerer &rhs)
{
    if (this != &rhs)
    {
      this->_name = rhs._name;
      this->_title = rhs._title;
    }
    return (*this);
}

std::ostream
&operator<< (std::ostream &out, const Sorcerer &target)
{
    out << "I am " << target.getName() << ", " << target.getTitle()
        << ",  I like ponies ! " << std::endl;
    return (out);
}

void Sorcerer::polymorph(Victim const &victim) const
{
    return(victim.getPolymorphed());
}

void
Sorcerer::setName(std::string name)
{
    this->_name = name;
    return ;
}

void
Sorcerer::setTitle(std::string title)
{
    this->_title = title;
    return ;
}

std::string
Sorcerer::getName(void) const
{
    return (this->_name);
}

std::string
Sorcerer::getTitle(void) const
{
    return (this->_title);
}