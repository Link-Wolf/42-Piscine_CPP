/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xxxxxxx <xxxxxxx@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 07:19:43 by xxxxxxx           #+#    #+#             */
/*   Updated: 2022/05/24 16:54:21 by xxxxxxx          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

/***********************
*	Constructors & Destructor
***********************/

WrongAnimal::WrongAnimal(void)
{
	this->type = "Ignotum animal novis";
	std::cout << "An animal is born!" << std::endl;
	return ;
}

WrongAnimal::WrongAnimal(WrongAnimal const &src)
{
	*this = src;
	std::cout << "An animal is born!" << std::endl;
	return ;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "An animal is going to the farm..." << std::endl;
	return ;
}

/***********************
*	Assignation Operators
***********************/

WrongAnimal	&WrongAnimal::operator=(WrongAnimal const &src)
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

std::string	WrongAnimal::getType(void) const
{
	return (this->type);
}

/***********************
*	Methods
***********************/

void		WrongAnimal::makeSound(void) const
{
	std::cout << "*strange and unfamiliar sounds*" << std::endl;
	return ;
}
