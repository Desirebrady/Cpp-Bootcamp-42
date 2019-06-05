/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshumba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 09:43:50 by dshumba           #+#    #+#             */
/*   Updated: 2019/06/05 09:48:48 by dshumba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"
#include <iostream>

void PonyOnHeap(std::string name, std::string color, std::string gender)
{
	Pony *pony = new Pony();
	pony->setName(name);
	pony->setColor(color);
	pony->setGender(gender);
	std::cout << "Hey! (0_0) my name is " << pony->getName() << std::flush;
	std::cout << "[" << pony->getGender() << "] " << std::flush;
	std::cout << "and i am " << pony->getColor() << "." << std::endl;
	
	delete(pony);
}

void PonyOnStack(std::string name, std::string color, std::string gender)
{
	Pony pony;
	pony.setName(name);
	pony.setColor(color);
	pony.setGender(gender);
	std::cout << "Heya! <3<3 my name is " << pony.getName() << std::flush;
	std::cout << "[" << pony.getGender() << "] " << std::flush;
	std::cout << "and i am " << pony.getColor() << "." << std::endl;

}

int main()
{
	std::cout << "---------------------------------------" << std::endl;
	std::cout << "Pony on the heap enroute" << std::endl;
	PonyOnHeap("Trixy", "blue and white", "male");
	std::cout << "Pony on the heap gone" << std::endl;

	std::cout << "---------------------------------------" << std::endl;
	std::cout << "---------------------------------------" << std::endl;

	std::cout << "Pony on the stack enroute " << std::endl;
	PonyOnStack("Alexia", "pink and white", "female");
	std::cout << "Pony on the stack gone" << std::endl;
	std::cout << "---------------------------------------" << std::endl;
	return (0);
}
