/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xxxxxxx <xxxxxxx@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 07:19:30 by xxxxxxx           #+#    #+#             */
/*   Updated: 2022/05/24 16:53:52 by xxxxxxx          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/***********************
*	Constructors & Destructor
***********************/

Cat::Cat(void):Animal()
{
	this->type = "Cat";
	std::cout << "A cat is born!" << std::endl;
	return ;
}

Cat::Cat(Cat const &src):Animal()
{
	*this = src;
	std::cout << "A cat is born!" << std::endl;
	return ;
}

Cat::~Cat(void)
{
	std::cout << "A cat is going to the farm..." << std::endl;
	return ;
}

/***********************
*	Assignation Operators
***********************/

Cat	&Cat::operator=(Cat const &src)
{
	this->Animal::operator=(src);
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

void		Cat::makeSound(void) const
{
	std::cout << "Meow hsss moew" << std::endl;
	return ;
}
