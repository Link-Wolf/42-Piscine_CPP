/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xxxxxxx <xxxxxxx@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 12:07:54 by xxxxxxx           #+#    #+#             */
/*   Updated: 2022/05/26 12:31:01 by xxxxxxx          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_H
#define INTERN_H

#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include <iostream>
#include <string>

class AForm ;

class Intern
{
	private:
		typedef AForm*(*f_form)(std::string target);

		static std::string form_name[];
		static f_form form_func[];

		static AForm *f_presidential_pardon(std::string target);
		static AForm *f_robotomy_request(std::string target);
		static AForm *f_shrubbery_creation(std::string target);

	public:
		Intern(void);
		Intern(Intern const &src);
		~Intern(void);

		Intern &operator=(Intern const &ref);

		AForm	*makeForm(std::string name, std::string target);
};

#endif
