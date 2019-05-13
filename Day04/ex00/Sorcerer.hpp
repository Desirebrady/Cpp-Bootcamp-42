#ifndef _SORCERER_H_
#define _SORCERER_H_

#include "Victim.hpp"
#include <iostream>
#include <string>

class Sorcerer
{
private:
    std::string _name;
    std::string _title;
    /* data */
public:
    Sorcerer(std::string name, std::string title);
    Sorcerer(const Sorcerer &src);
    Sorcerer();
    ~Sorcerer();
    void         setName(std::string name);
    void         setTitle(std::string title);
    Sorcerer &operator= (const Sorcerer &rhs);
    void polymorph(Victim const &victim) const;
    std::string  getName(void) const;
    std::string  getTitle(void) const;
};

std::ostream &operator<<(std::ostream &out, Sorcerer const &target);


#endif // !