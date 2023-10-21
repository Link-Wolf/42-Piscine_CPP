/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xxxxxxx <xxxxxxx@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 07:42:00 by xxxxxxx           #+#    #+#             */
/*   Updated: 2022/05/24 16:54:36 by xxxxxxx          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class AMateria;
class ICharacter;

class Cure : public AMateria
{
	private:

	protected:

	public:
		Cure(void);
		Cure(const Cure &src);
		Cure(const std::string type);
		virtual ~Cure(void);

		Cure		&operator=(const Cure &src);

		virtual AMateria	*clone(void) const;
		virtual void	use(ICharacter&);
};

#endif
