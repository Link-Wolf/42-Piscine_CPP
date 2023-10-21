/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xxxxxxx <xxxxxxx@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 14:32:28 by xxxxxxx           #+#    #+#             */
/*   Updated: 2022/05/25 15:22:39 by xxxxxxx          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
#define FORM_H

#include "Bureaucrat.hpp"
#include <iostream>
#include <string>

class Bureaucrat;

class Form
{
	class GradeTooLowExeption : public std::exception
	{
		const char	*what() const throw();
	};

	class GradeTooHighExeption : public std::exception
	{
		const char	*what() const throw();
	};

	private:
		const std::string	name;
		bool				is_signed;
		const int			gradeToSign;
		const int			gradeToExecute;


	public:
		Form(void);
		Form(Form const &src);
		Form(std::string name, int gradeToSign, int gradeToExecute);
		~Form(void);

		Form &operator=(Form const &ref);

		int					getExecuteGrade(void) const;
		int					getSignGrade(void) const;
		const std::string	getName(void) const;
		bool				isSigned(void) const;


		void				beSigned(Bureaucrat signer);

};

std::ostream	&operator<<(std::ostream &o, Form const &f);

#endif
