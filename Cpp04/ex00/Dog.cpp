/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdehais <bdehais@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 07:19:15 by bdehais           #+#    #+#             */
/*   Updated: 2022/05/24 16:53:54 by bdehais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/***********************
*	Constructors & Destructor
***********************/

Dog::Dog(void):Animal()
{
	this->type = "Dog";
	std::cout << "A dog is born!" << std::endl;
	return ;
}

Dog::Dog(Dog const &src):Animal()
{
	*this = src;
	std::cout << "A dog is born!" << std::endl;
	return ;
}

Dog::~Dog(void)
{
	std::cout << "A dog is going to the farm..." << std::endl;
	return ;
}

/***********************
*	Assignation Operators
***********************/

Dog	&Dog::operator=(Dog const &src)
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

void		Dog::makeSound(void) const
{
	std::cout << "Waf bark waf" << std::endl;
	return ;
}
