/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshumba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 09:57:03 by dshumba           #+#    #+#             */
/*   Updated: 2019/06/05 09:57:04 by dshumba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <string.h>

Brain::Brain(void)
{
	void const *hex = static_cast<const void*>(this);
	std::stringstream cin;
	cin << hex;
	this->_address = cin.str();
	return;
}

Brain::~Brain(void)
{
	return;
}

std::string		Brain::identify(void) const
{
	return this->_address;
}
