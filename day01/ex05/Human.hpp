#ifndef HUMAN_H
# define HUMAN_H

# include <iostream>
# include <string>
# include "Brain.hpp"

class Human {
public:
	Human(void);
	~Human(void);

	Brain const		brain;

	std::string		identify(void) const;
	Brain 			getBrain(void);
};

#endif