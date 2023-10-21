/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xxxxxxx <xxxxxxx@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 08:23:35 by xxxxxxx           #+#    #+#             */
/*   Updated: 2022/05/24 16:54:14 by xxxxxxx          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

/***********************
*	Constructors & Destructor
***********************/

Brain::Brain(void)
{
	int i = 0;
	while (i < 100)
	{
		this->ideas[i] = randomIdea();
		i++;
	}
	std::cout << "A brain was created" << std::endl;
	return ;
}

Brain::Brain(Brain const &src)
{
	*this = src;
	std::cout << "A brain was created" << std::endl;
	return ;
}

Brain::~Brain(void)
{
	std::cout << "A brain was destructed" << std::endl;
	return ;
}

/***********************
*	Assignation Operators
***********************/

Brain	&Brain::operator=(Brain const &src)
{
	int	i = 0;
	while (i < 100)
	{
		this->ideas[i] = src.ideas[i];
		i++;
	}
	return (*this);
}

/***********************
*	Boolean Operators
***********************/

/***********************
*	Arithmetic Operators
***********************/

/***********************
*	Stream Operators
***********************/

/***********************
*	Getter & Setters
***********************/

/***********************
*	Methods
***********************/

void	Brain::printIdea(int i)
{
	std::cout << this->ideas[i];
}

std::string	Brain::randomIdea(void)
{
	static const std::string	char_set
		= "qwertyuiopasdfghjkLZXCVBNM1234567890          ☭";
	std::string	res;
	int			i;

	i = 0;
	while (i < 16)
	{
		res += char_set[std::rand() % char_set.length()];
		i++;
	}
	return res;
}
