/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshumba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 09:57:16 by dshumba           #+#    #+#             */
/*   Updated: 2019/06/05 09:57:17 by dshumba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human(void) : brain()
{
	return;
}

Human::~Human(void)
{
	return;
}

std::string		Human::identify(void) const
{
	return this->brain.identify();
}

Brain			Human::getBrain(void)
{
	return this->brain;
}
