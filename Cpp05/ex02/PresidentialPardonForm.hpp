/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xxxxxxx <xxxxxxx@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 15:52:19 by xxxxxxx           #+#    #+#             */
/*   Updated: 2022/05/26 10:46:53 by xxxxxxx          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_H
#define PRESIDENTIALPARDONFORM_H

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include <iostream>
#include <string>

class Bureaucrat ;

class PresidentialPardonForm : public AForm
{
	private:
		std::string	target;

	public:
		PresidentialPardonForm(void);
		PresidentialPardonForm(PresidentialPardonForm const &src);
		PresidentialPardonForm(std::string const &target);
		~PresidentialPardonForm(void);

		PresidentialPardonForm &operator=(PresidentialPardonForm const &ref);

		virtual void		execute(Bureaucrat const & executor) const;
};

#endif
