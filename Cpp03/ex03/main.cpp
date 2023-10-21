/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xxxxxxx <xxxxxxx@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 08:34:21 by xxxxxxx           #+#    #+#             */
/*   Updated: 2022/05/20 16:39:32 by xxxxxxx          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void)
{
	DiamondTrap	test;
	DiamondTrap	victim("Billy");
	DiamondTrap	copied(victim);

	test.attack("Billy");
	victim.takeDamage(1);
	copied.beRepaired(2);
	test.attack("everybody");
	victim.highFivesGuys();
	test.guardGate();
	copied.whoAmI();
	return 0;
}
