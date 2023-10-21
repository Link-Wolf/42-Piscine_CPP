/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xxxxxxx <xxxxxxx@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 10:00:36 by xxxxxxx           #+#    #+#             */
/*   Updated: 2022/05/25 17:55:30 by xxxxxxx          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include "AForm.hpp"
#include <iostream>
#include <string>

class AForm ;

class Bureaucrat
{
	class GradeTooHighExeption : public std::exception
	{
		const char	*what() const throw();
	};

	class GradeTooLowExeption : public std::exception
	{
			const char	*what() const throw();
	};

	private:
		const std::string	name;
		int					grade;

	protected:

	public:
		Bureaucrat(void);
		Bureaucrat(Bureaucrat const &src);
		Bureaucrat(const std::string name, int grade);
		~Bureaucrat(void);

		Bureaucrat &operator=(Bureaucrat const &ref);

		int					getGrade(void) const;
		const std::string	getName(void) const;

		void				incrementGrade(void);
		void				decrementGrade(void);
		void				signForm(AForm &form);

		void				executeForm(AForm const &form);
};

std::ostream	&operator<<(std::ostream &o, Bureaucrat const &b);

#endif
