#include "Zombie.hpp"
#include "ZombieHorde.hpp"
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
	random = rand() % 4;
	return((std::string) tab[random]);
}

void		randomChump(int n)
{
	ZombieHorde event = ZombieHorde(n);
	int i = 0;
	while (i < n)
	{
		event.setZombieType("Runners");
		Zombie *newZombie = event.newZombie(name());
		newZombie->announce();
		delete newZombie;
		i++;
	}
}

int main()
{
	std::cout << "-----------------------------" << std::endl;	
	std::cout << "Zombie Horde being created " << std::endl;	
	randomChump(5);
	std::cout << "-----------------------------" << std::endl;
	return (0);
}
