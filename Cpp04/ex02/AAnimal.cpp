/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xxxxxxx <xxxxxxx@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 07:19:35 by xxxxxxx           #+#    #+#             */
/*   Updated: 2022/05/24 16:54:12 by xxxxxxx          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

/***********************
*	Constructors & Destructor
***********************/

AAnimal::AAnimal(void)
{
	this->type = "Ignotum animal novis";
	std::cout << "An animal is born!" << std::endl;
	return ;
}

AAnimal::AAnimal(AAnimal const &src)
{
	*this = src;
	std::cout << "An animal is born!" << std::endl;
	return ;
}

AAnimal::~AAnimal(void)
{
	std::cout << "An animal is going to the farm..." << std::endl;
	return ;
}

/***********************
*	Assignation Operators
***********************/

AAnimal	&AAnimal::operator=(AAnimal const &src)
{
	this->type = src.type;
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

std::string	AAnimal::getType(void) const
{
	return (this->type);
}

/***********************
*	Methods
***********************/

void		AAnimal::makeSound(void) const
{
	std::cout << "*strange and unfamiliar sounds*" << std::endl;
	return ;
}
