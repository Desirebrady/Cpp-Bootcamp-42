/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshumba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 10:00:38 by dshumba           #+#    #+#             */
/*   Updated: 2019/06/05 10:00:41 by dshumba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

int				main(void)
{
	Human		desire("Bardysee");

	desire.action("meleeAttack", "you");
	desire.action("rangedAttack", "you");
	desire.action("intimidatingShout", "you");
}
