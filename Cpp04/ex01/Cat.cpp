/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xxxxxxx <xxxxxxx@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 07:19:30 by xxxxxxx           #+#    #+#             */
/*   Updated: 2022/05/24 16:54:08 by xxxxxxx          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/***********************
*	Constructors & Destructor
***********************/

Cat::Cat(void):Animal()
{
	this->brain = new Brain();
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
	delete this->brain;
	std::cout << "A cat is going to the farm..." << std::endl;
	return ;
}

/***********************
*	Assignation Operators
***********************/

Cat	&Cat::operator=(Cat const &src)
{
	delete this->brain;
	this->brain = new Brain(*src.brain);
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

Brain	*Cat::getBrain(void) const
{
	return (this->brain);
}

/***********************
*	Methods
***********************/

void		Cat::makeSound(void) const
{
	std::cout << "Meow hsss moew" << std::endl;
	return ;
}
