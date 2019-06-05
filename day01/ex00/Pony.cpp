/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshumba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 09:43:32 by dshumba           #+#    #+#             */
/*   Updated: 2019/06/05 09:43:33 by dshumba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"
#include <iostream>


Pony::Pony() {
	std::cout << "Creating the pony..." << std::endl;
}

Pony::~Pony() {
	std::cout << "Destroying the pony..." << std::endl;
}

std::string	Pony::getName(void) {
	return this->name;
}

std::string	Pony::getColor(void) {
	return this->color;
}
std::string	Pony::getGender(void) {
	return this->gender;
}

void		Pony::setName(std::string name) {
	this->name = name;
}

void		Pony::setColor(std::string color) {
	this->color = color;
}
void		Pony::setGender(std::string gender) {
	this->gender = gender;
}


