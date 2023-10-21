/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xxxxxxx <xxxxxxx@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 09:52:35 by xxxxxxx           #+#    #+#             */
/*   Updated: 2022/05/18 09:28:34 by xxxxxxx          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie *my_horde = zombieHorde(13, "BillyArmy");
	for (size_t i = 0; (int)i < 13; i++) {
		my_horde[i].announce();
	}
	delete [] my_horde;
}
