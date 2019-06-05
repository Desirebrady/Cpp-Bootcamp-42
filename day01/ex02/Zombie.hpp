/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshumba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 09:53:59 by dshumba           #+#    #+#             */
/*   Updated: 2019/06/05 09:54:00 by dshumba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ZOMBIE_H_
#define _ZOMBIE_H_

#include <iostream>
class Zombie
{
public:
	std::string name;
	std::string type;
	Zombie(std::string name, std::string type);
	~Zombie();
	std::string getName(void);
	std::string getType();
	void announce(void);
};

#endif

