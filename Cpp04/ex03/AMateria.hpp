/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xxxxxxx <xxxxxxx@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 07:32:56 by xxxxxxx           #+#    #+#             */
/*   Updated: 2022/05/24 16:54:34 by xxxxxxx          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <string>
#include <iostream>
#include "ICharacter.hpp"

class ICharacter ;

class AMateria
{
	private:

	protected:
		std::string	type;

	public:
		AMateria(void);
		AMateria(const AMateria &src);
		AMateria(const std::string &type);
		virtual ~AMateria(void);

		AMateria			&operator=(AMateria const &src);

		const std::string	&getType();

		virtual AMateria	*clone(void) const = 0;
		virtual void		use(ICharacter &target) = 0;
};

#endif
