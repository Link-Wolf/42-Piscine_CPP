/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xxxxxxx <xxxxxxx@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 10:00:47 by xxxxxxx           #+#    #+#             */
/*   Updated: 2022/05/25 10:56:03 by xxxxxxx          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/***********************
*	Constructors & Destructor
***********************/

Bureaucrat::Bureaucrat(void):
	name("Jean-Billy DEFAULT")
{
	this->grade = 150;
	return ;
}

Bureaucrat::Bureaucrat(Bureaucrat const &src):
	name(src.name)
{
	*this = src;
	return ;
}

Bureaucrat::Bureaucrat(const std::string name, int grade):
	name(name)
{
	if (grade > 150)
	{
		throw GradeTooLowExeption();
		return ;
	}
	if (grade < 1)
	{
		throw GradeTooHighExeption();
		return ;
	}
	this->grade = grade;
	return ;
}

Bureaucrat::~Bureaucrat(void)
{
	return ;
}

/***********************
*	Assignation Operators
***********************/

Bureaucrat	&Bureaucrat::operator=(Bureaucrat const &src)
{
	this->grade = src.grade;
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

std::ostream	&operator<<(std::ostream &o, Bureaucrat const &b)
{
	return (o << b.getName() << ", bureaucrat grade " << b.getGrade());
}

/***********************
*	Getter & Setters
***********************/

int					Bureaucrat::getGrade(void) const
{
	return (this->grade);
}

const std::string	Bureaucrat::getName(void) const
{
	return (this->name);
}

/***********************
*	Methods
***********************/

void	Bureaucrat::incrementGrade(void)
{
	if (this->getGrade() > 1)
		this->grade -= 1;
	else
		throw Bureaucrat::GradeTooHighExeption();
}

void	Bureaucrat::decrementGrade(void)
{
	if (this->getGrade() < 150)
		this->grade += 1;
	else
		throw Bureaucrat::GradeTooLowExeption();
}

/***********************
*	Exception
***********************/

const char	*Bureaucrat::GradeTooLowExeption::what() const throw()
{
	return ("\e[38;5;1mGradeTooLowExeption : Grade can't be lower than 150\e[39m");
}


const char	*Bureaucrat::GradeTooHighExeption::what() const throw()
{
	return ("\e[38;5;1mGradeTooHighExeption : Grade can't be higher than 1\e[39m");
}
