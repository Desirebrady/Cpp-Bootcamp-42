#ifndef BRAIN_H
# define BRAIN_H

#include <iostream>
#include <string>
#include <sstream>

class Brain {
public:
	Brain(void);
	~Brain(void);
	std::string	identify() const;
private:
	std::string	_address;
};

#endif