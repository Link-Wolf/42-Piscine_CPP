/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xxxxxxx <xxxxxxx@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 08:34:21 by xxxxxxx           #+#    #+#             */
/*   Updated: 2022/05/20 16:39:15 by xxxxxxx          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap	test;
	ClapTrap	named("Alice");
	ClapTrap	victim("Billy");
	ClapTrap	copied(named);

	test.attack("Billy");
	victim.takeDamage(1);
	victim.beRepaired(2);
	int i = 12;
	while (--i)
		named.attack("Billy");
	victim.takeDamage(20);
	victim.beRepaired(10);
	victim.attack("everybody");
	return 0;
}
