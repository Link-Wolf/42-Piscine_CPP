/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xxxxxxx <xxxxxxx@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 09:52:35 by xxxxxxx           #+#    #+#             */
/*   Updated: 2022/05/17 13:34:10 by xxxxxxx          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void) {
	Zombie	zomb1;
	Zombie	zomb2("Billy surchargé");
	Zombie	*zomb3 = newZombie("Gertrude newdée");

	zomb1.announce();
	zomb2.announce();
	zomb3->announce();

	randomChump("Jean-Billy");
	delete zomb3;
	return 0;
}
