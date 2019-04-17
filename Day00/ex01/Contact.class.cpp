#include "pch.h"
#include "Contact.h"
#include <iostream>
#include <string>
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
	//while (i < 9)
	//{
	//	std::cout << ' ';
	//	i++;
	//}
	std::cout << index << '|';
	if ((space_number = std::strlen(first_name)) < 10)
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
	//if ((space_number = std::strlen(last_name)) < 10)
	//{
	//	space_number = 10 - space_number;
	//	std::cout << std::string(space_number, ' ') << last_name << '|';
	//}
	//else
	//{
	//	i = 0;
	//	while (i < 9)
	//	{
	//		std::cout << first_name[i];
	//		i++;
	//	}
	//	std::cout << '.' << '|';
	//}
	//if ((space_number = std::strlen(nickname)) < 10)
	//{
	//	space_number = 10 - space_number;
	//	std::cout << std::string(space_number, ' ') << nickname << '|';
	//}
	//else
	//{
	//	i = 0;
	//	while (i < 9)
	//	{
	//		std::cout << first_name[i];
	//		i++;
	//	}
	//	std::cout << '.' << '|' << '\n';
	//}
}