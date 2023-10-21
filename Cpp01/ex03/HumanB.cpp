/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xxxxxxx <xxxxxxx@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 12:18:24 by xxxxxxx           #+#    #+#             */
/*   Updated: 2022/04/01 12:39:13 by xxxxxxx          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB (std::string name)
{
	this->name = name;
}

HumanB::~HumanB ()
{
}

void	HumanB::attack(void)
{
	std::cout << this->name << " attacked with " << this->weapon->getType() << '\n';
}
void	HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}
