#ifndef _PONY_H_
#define _PONY_H_

#include <iostream>
class Pony {
	public:
		std::string name;
		std::string color;
		std::string gender;
		
		Pony();
		~Pony();

		std::string	getName(void);
		std::string	getColor(void);
		std::string	getGender(void);

		void		setName(std::string name);
		void		setColor(std::string color);
		void		setGender(std::string gender);
};
#endif