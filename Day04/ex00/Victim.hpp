#ifndef _VICTIM_H_
#define _VICTIM_H_

#include <iostream>
#include <string>
class Victim
{
protected:
    std::string _name;
    
public:
    Victim();
    Victim(std::string name);
    Victim(const Victim &src);
    Victim &operator= (const Victim &rhs);
    void getPolymorphed()const;
    ~Victim();
    std::string getName(void) const;

};

std::ostream &operator<<(std::ostream &out, Victim const &target);
#endif // !_VICTIM_H_