#ifndef PHONEBOOK_H_
#define PHONEBOOK_H_

#include <iostream>
#include "Contact.hpp"

class Phonebook
{
private:
	Contact contacts[8];
	int c_num;
public:
	int Limit();
	void saveContact(Contact *contact);
	Contact *getUser(int index);
	void listContacts(void(Contact::* f)(void));
	Phonebook();
	~Phonebook();
};

#endif

