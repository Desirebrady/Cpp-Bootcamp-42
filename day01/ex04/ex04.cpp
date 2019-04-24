#include <iostream>

int main()
{
	std::string string = "HI THIS IS BRAIN";
	std::string *ptr = &string;
	std::string &ref = string;
	std::cout << "Pointer to the string" << std::endl;
	std::cout << *ptr << std::endl;
	std::cout << "---------------------" << std::endl;
	std::cout << "Reference to the string" << std::endl;
	std::cout << ref << std::endl;
	return (0);
}