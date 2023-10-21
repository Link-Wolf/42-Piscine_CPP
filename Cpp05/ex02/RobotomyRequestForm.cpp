/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xxxxxxx <xxxxxxx@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 15:52:25 by xxxxxxx           #+#    #+#             */
/*   Updated: 2022/05/26 10:54:12 by xxxxxxx          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

/***********************
*	Constructors & Destructor
***********************/

RobotomyRequestForm::RobotomyRequestForm(void):
	AForm("Robotomy Request Default Form", 72, 45),
	target("You")
{
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src):
	AForm("Robotomy Request Default Form", 72, 45),
	target(src.target)
{
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(std::string const &target):
	AForm("Robotomy Request Default Form", 72, 45),
	target(target)
{
	return ;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	return ;
}

/***********************
*	Assignation Operators
***********************/

RobotomyRequestForm	&RobotomyRequestForm::operator=
	(RobotomyRequestForm const &src)
{
	this->target = src.target;
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

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() > this->getExecuteGrade() || !this->isSigned())
		throw GradeTooLowExeption();
	std::cout << "* angsty drill noises *" << std::endl;
	if (rand() % 2)
	{
		std::cout << "Successfully robotised " << this->target << std::endl;
	}
	else
	{
		std::cout << "Failed to robotised " << this->target << std::endl;
	}
}
