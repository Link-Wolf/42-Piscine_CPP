/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xxxxxxx <xxxxxxx@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 07:41:52 by xxxxxxx           #+#    #+#             */
/*   Updated: 2022/05/24 16:54:36 by xxxxxxx          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

/***********************
*	Constructors & Destructor
***********************/

Cure::Cure(void):AMateria()
{
	this->type = "cure";
	return ;
}

Cure::Cure(Cure const &src):AMateria()
{
	*this = src;
	return ;
}

Cure::~Cure(void)
{
	return ;
}

/***********************
*	Assignation Operators
***********************/

Cure	&Cure::operator=(Cure const &src)
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

void	Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}

AMateria	*Cure::clone(void) const
{
	AMateria *clone = new Cure(*this);

	return (clone);
}
