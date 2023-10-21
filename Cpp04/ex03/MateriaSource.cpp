/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xxxxxxx <xxxxxxx@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 08:07:35 by xxxxxxx           #+#    #+#             */
/*   Updated: 2022/05/24 16:54:41 by xxxxxxx          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

/***********************
*	Constructors & Destructor
***********************/

MateriaSource::MateriaSource(void)
{
	return ;
}

MateriaSource::MateriaSource(MateriaSource const &src)
{
	*this = src;
	return ;
}

MateriaSource::~MateriaSource(void)
{
	return ;
}

/***********************
*	Assignation Operators
***********************/

MateriaSource	&MateriaSource::operator=(MateriaSource const &src)
{
	int	i = 0;

	while (i < 4)
	{
		if (this->known[i++])
			delete this->known[i - 1];
		if (src.known[i - 1])
			this->known[i - 1] = src.known[i - 1]->clone();
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

void MateriaSource::learnMateria(AMateria *m)
{
	int	i = 0;

	while (i < 4)
	{
		if (this->known[i++])
			continue;
		this->known[i - 1] = m->clone();
		break;
	}
	return ;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	int	i = 0;

	while (i < 4)
	{
		if (!this->known[i])
			break;
		if (this->known[i]->getType() == type)
			return this->known[i]->clone();
		i++;
	}
	return 0;
}
