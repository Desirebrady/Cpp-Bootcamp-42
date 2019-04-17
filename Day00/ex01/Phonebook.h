#ifndef PHONEBOOK_H_
#define PHONEBOOK_H_

#include "pch.h"
#include <iostream>
#include "Contact.h"

class Phonebook
{
private:
	Contact contacts[8];
	int c_num;
public:
	int Limit();
	void saveContact(Contact *contact);
	void listContacts(void(Contact::* f)(void));
	Phonebook();
	~Phonebook();
};

#endif

