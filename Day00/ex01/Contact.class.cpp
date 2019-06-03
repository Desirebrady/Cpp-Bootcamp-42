#include "Contact.hpp"
#include <iostream>
#include <string>
#include <cstring>
#include <iomanip>


Contact::Contact(void)
{
}


Contact::~Contact(void)
{
}

void	Contact::print(void) {
	static int	space_number;
	static int	i;

	space_number = 0;
	i = 0;
	while (i < 9)
	{
		std::cout << ' ';
		i++;
	}
	std::cout << index << '|';
	if ((space_number = strlen(first_name)) < 10)
	{
		space_number = 10 - space_number;
		std::cout << std::string(space_number, ' ') << first_name << '|';
	}
	else
	{
		i = 0;
		while (i < 9)
		{
			std::cout << first_name[i];
			i++;
		}
		std::cout << '.' << '|';
	}
	if ((space_number = strlen(last_name)) < 10)
	{
		space_number = 10 - space_number;
		std::cout << std::string(space_number, ' ') << last_name << '|';
	}
	else
	{
		i = 0;
		while (i < 9)
		{
			std::cout << first_name[i];
			i++;
		}
		std::cout << '.' << '|';
	}
	if ((space_number = strlen(nickname)) < 10)
	{
		space_number = 10 - space_number;
		std::cout << std::string(space_number, ' ') << nickname << '|';
	}
	else
	{
		i = 0;
		while (i < 9)
		{
			std::cout << first_name[i];
			i++;
		}
		std::cout << '.' << '|' << '\n';
	}
}

void Contact::userInfo()
{
	std::cout << "[First Name] " << first_name << std::endl;
	std::cout << "[last Name ] " << last_name << std::endl;
	std::cout << "[Nickname  ] " << nickname << std::endl;
	std::cout << "[login     ] " << login << std::endl;
	std::cout << "[Postal adr] " << postal_adress << std::endl;
	std::cout << "[email     ] " << email_adress << std::endl;
	std::cout << "[Number    ] " << phone_number << std::endl;
	std::cout << "[Birthday  ] " << birthday << std::endl;
	std::cout << "[loved food] " << favorite_meal << std::endl;
	std::cout << "[Underwear ] " << underwear_color << std::endl;
	std::cout << "[Secret    ] " <<darkest_secret << std::endl;

}
