/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshumba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 09:57:23 by dshumba           #+#    #+#             */
/*   Updated: 2019/06/05 09:57:27 by dshumba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
