#include "Phonebook.hpp"
#include "Contact.hpp"

void Phonebook::saveContact(Contact *contact)
{
	contacts[c_num] = *contact;
	c_num++;
}

void Phonebook::listContacts(void(Contact::*f)(void))
{
	int		i;

	i = 0;
	while (i < c_num)
	{
		(contacts[i].*f)();
		std::cout << std::endl;
		i++;
	}
}

Phonebook::Phonebook(void)
{
	c_num = 0;
	return;
}

Phonebook::~Phonebook(void)
{
	return;
}

int Phonebook::Limit()
{
	if (c_num >= 7)
		return (1);
	return (0);
}

Contact *Phonebook::getUser(int index)
{
	int i;

	i = 0;
	while (i < c_num)
	{
		if (contacts[i].index == index)
			return (&contacts[i]);
		i++;
	}
	return (NULL);
}