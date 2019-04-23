#ifndef _ZOMBIE_H_
#define _ZOMBIE_H_

#include <iostream>
class Zombie
{
public:
	std::string name;
	std::string type;
	Zombie(std::string name, std::string type);
	~Zombie();
	std::string getName(void);
	std::string getType();
	void announce(void);
};

#endif

