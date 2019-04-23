#ifndef CONTACT_H_
#define CONTACT_H_

#include <iostream>
class Contact
{
public:
	char first_name[25];
	char last_name[25];
	char nickname[25];
	int index;
	Contact();
	~Contact();
	void print(void);
	void userInfo(void);
};

#endif // !1


