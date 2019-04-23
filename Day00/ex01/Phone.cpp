#include "Phonebook.hpp"
#include "Contact.hpp"
#include <iostream>
#include <string>

int main()
{
	Phonebook phonebook;
	Contact contact;
	Contact *user;
	std::string input;
	int index = 1;
	int i = 0;
	while (true)
	{
		std::cout << "What can i do for you?\n" << std::endl;
		std::cout << "[ADD]New Contact\n";
		std::cout << "[SEARCH]Search contact\n";
		std::cout << "[EXIT]Stop the phone\n" << std::endl;
		std::cout << "your choice : ";
		std::cin >> input;
		if (input == "ADD" || input == "add")
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
		else if (input == "SEARCH" || input == "search")
		{
			std::cout << "     index|first name| last name|  nickname|" << std::endl;
			phonebook.listContacts(&Contact::print);
			std::cout << "Enter index to get more info" << std::endl;
			int search;
			std::cin >> search;

			if (user = phonebook.getUser(search))
			{
				std::cout << "     index|first name| last name|  nickname|" << std::endl;
				user->print();
			}
			std::cout << "\n" << std::endl;
		}
		else if (input == "EXIT" || input == "exit")
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