#include "Zombie.hpp"
#include "ZombieEvent.hpp"
#include <iostream>

#include <time.h>

std::string	name(void)
{
	char	*tab[] = {
		(char *)"Desire",
		(char *)"Brady",
		(char *)"Bradysee",
		(char *)"Heya",
	};
	int random;
	random = time(NULL) % 4;
	return((std::string) tab[random]);
}

void		randomChump()
{
	//std::cout << "RandomChump :" << std::endl;
	ZombieEvent event = ZombieEvent();
	event.setZombieType("Runners");
	Zombie *newZombie = event.newZombie(name());
	newZombie->announce();
	delete newZombie;
}

int main()
{
	std::cout << "ZombieOnTheHeap: " << std::endl;
	randomChump();
	std::cout << "ZombieOnTheStack:" << std::endl;
	Zombie spitter = Zombie("Fred", "Ghoul");
	spitter.announce();
}
