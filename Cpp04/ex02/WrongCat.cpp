/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xxxxxxx <xxxxxxx@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 07:19:46 by xxxxxxx           #+#    #+#             */
/*   Updated: 2022/05/24 16:54:22 by xxxxxxx          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

/***********************
*	Constructors & Destructor
***********************/

WrongCat::WrongCat(void):WrongAnimal()
{
	this->type = "Cat";
	std::cout << "A cat is born!" << std::endl;
	return ;
}

WrongCat::WrongCat(WrongCat const &src):WrongAnimal()
{
	*this = src;
	std::cout << "A cat is born!" << std::endl;
	return ;
}

WrongCat::~WrongCat(void)
{
	std::cout << "A cat is going to the farm..." << std::endl;
	return ;
}

/***********************
*	Assignation Operators
***********************/

WrongCat &	WrongCat::operator=(WrongCat const &src)
{
	this->WrongAnimal::operator=(src);
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

void		WrongCat::makeSound(void) const
{
	std::cout << "Meow hsss moew" << std::endl;
	return ;
}
