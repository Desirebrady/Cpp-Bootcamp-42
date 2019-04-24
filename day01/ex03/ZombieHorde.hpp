#ifndef _ZOMBIEHORDE_H_
#define _ZOMBIEHORDE_H_

#include <iostream>
#include <time.h>
#include "Zombie.hpp"
class ZombieHorde
{
public:
	std::string type;
	ZombieHorde(int N);
	~ZombieHorde();

	std::string name(void);

	void setZombieType(std::string type);

	Zombie *newZombie(std::string name);

private:

};
#endif 