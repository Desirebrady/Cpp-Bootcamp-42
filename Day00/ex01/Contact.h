#ifndef CONTACT_H_
#define CONTACT_H_
#include "pch.h"
#include <iostream>
class Contact
{
public:
	char first_name[25];
	char last_name[25];
	char nickname[25];
	int index;
	//get name;
	//set name;
	Contact();
	~Contact();
	void print(void);
};

#endif // !1


