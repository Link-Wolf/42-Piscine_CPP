/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xxxxxxx <xxxxxxx@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 08:00:55 by xxxxxxx           #+#    #+#             */
/*   Updated: 2022/05/24 16:54:35 by xxxxxxx          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

/***********************
*	Constructors & Destructor
***********************/

Character::Character(void)
{
	return ;
}

Character::Character(Character const &src)
{
	*this = src;
	return ;
}

Character::Character(std::string const &name)
{
	this->name = name;
	return ;
}

Character::~Character(void)
{
	int i = 0;

	while (i < 4)
	{
		if (this->inv[i])
			delete this->inv[i];
		i++;
	}
	return ;
}

/***********************
*	Assignation Operators
***********************/

Character	&Character::operator=(Character const &src)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->inv[i])
			delete this->inv[i];
		if (src.inv[i])
			this->inv[i] = src.inv[i]->clone();
	}
	this->name = src.name;

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

std::string const &Character::getName() const
{
	return (this->name);
}

/***********************
*	Methods
***********************/

void Character::equip(AMateria* m)
{
	int i = 0;

	while (i < 4)
	{
		if (this->inv[i++])
			continue ;
		this->inv[i - 1] = m;
		break ;
	}
}

void Character::unequip(int idx)
{
	AMateria	*ptr;

	ptr = this->inv[idx];
	this->inv[idx] = nullptr;
}

void Character::use(int idx, ICharacter& target)
{
	this->inv[idx]->use(target);
}
