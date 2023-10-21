/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xxxxxxx <xxxxxxx@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 07:19:12 by xxxxxxx           #+#    #+#             */
/*   Updated: 2022/05/24 16:54:10 by xxxxxxx          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include <time.h>

#ifndef NB_ANIMALS
#define NB_ANIMALS 1
#endif

int	main(void)
{
	srand (time(0));
	const Animal	*zoo[NB_ANIMALS];
	const Cat		*mabel = new Cat();
	Cat				*dipper = new Cat();
	int				i;

	i = 0;
	std::cout << "CREATING ZOO" << std::endl;
	while (i < NB_ANIMALS)
	{
		if (i % 2)
			zoo[i] = new Cat();
		else
			zoo[i] = new Dog();
			i++;
	}
	std::cout << "COPY" << std::endl;
	*(dipper) = *(mabel);
	std::cout << mabel->getBrain() << " =? " << dipper->getBrain() << std::endl;
	mabel->getBrain()->printIdea(0);
	std::cout << " =? ";
	dipper->getBrain()->printIdea(0);
	std::cout << std::endl;
	std::cout << "DELETE" << std::endl;
	delete mabel;
	delete dipper;
	i = 0;
	while (i < NB_ANIMALS)
	{
		delete zoo[i];
		i++;
	}
	return 0;
}
