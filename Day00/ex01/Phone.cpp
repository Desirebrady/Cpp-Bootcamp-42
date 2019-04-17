#include "pch.h"
#include "Phonebook.h"
#include "Contact.h"
#include <iostream>
#include <string>

int main()
{
	Phonebook phonebook;
	Contact contact;
	std::string input;
	int index = 1;
	while (true)
	{
		std::cout << "What can i do for you?\n";
		std::cout << "[ADD]New Contact\n";
		std::cout << "[SEARCH]Search contact\n";
		std::cout << "[EXIT]Stop the phone\n";
		std::cout << "your choice : ";
		std::cin >> input;
		if (input == "ADD")
		{	
			if (phonebook.Limit() == 1)
			{
				std::cout << "Storage space depleted restart program" << std::endl;
			}
			else
			{
				std::cout << "Please enter your first name\n";
				std::cin >> contact.first_name;
				std::cout << "Please enter your last name\n";
				std::cin >> contact.last_name;
				std::cout << "Please enter your nickname\n";
				std::cin >> contact.nickname;
				contact.index = index;
				phonebook.saveContact(&contact);
				index++;
			}
		}
		else if (input == "SEARCH")
		{
			std::cout << "     index|first name| last name|  nickname|" << std::endl;
			phonebook.listContacts(&Contact::print);
		}
		else if (input == "EXIT")
		{
			return (0);
		}
		else
		{
			std::cout << "command not valid" << std::endl;
		}
	}
	return (0);
}