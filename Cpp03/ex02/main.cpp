/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xxxxxxx <xxxxxxx@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 08:34:21 by xxxxxxx           #+#    #+#             */
/*   Updated: 2022/05/20 16:39:25 by xxxxxxx          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	FragTrap	test;
	FragTrap	victim("Billy");
	FragTrap	copied(victim);

	test.attack("Billy");
	victim.takeDamage(1);
	copied.beRepaired(2);
	test.attack("everybody");
	victim.highFivesGuys();
	return 0;
}
