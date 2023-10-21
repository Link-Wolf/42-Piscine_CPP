/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xxxxxxx <xxxxxxx@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 07:41:14 by xxxxxxx           #+#    #+#             */
/*   Updated: 2022/05/24 16:54:37 by xxxxxxx          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

/***********************
*	Constructors & Destructor
***********************/

Ice::Ice(void):AMateria()
{
	this->type = "ice";
	return ;
}

Ice::Ice(Ice const &src):AMateria()
{
	*this = src;
	return ;
}

Ice::~Ice(void)
{
	return ;
}

/***********************
*	Assignation Operators
***********************/

Ice	&Ice::operator=(Ice const &src)
{
	this->AMateria::operator=(src);
	//this->type=src.type;
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

void	Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *"	<< std::endl;
}

AMateria	*Ice::clone(void) const
{
	AMateria *clone = new Ice(*this);
	return (clone);
}
