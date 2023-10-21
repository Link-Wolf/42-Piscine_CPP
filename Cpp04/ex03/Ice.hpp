/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xxxxxxx <xxxxxxx@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 07:41:30 by xxxxxxx           #+#    #+#             */
/*   Updated: 2022/05/24 16:54:38 by xxxxxxx          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class AMateria;
class ICharacter;

class Ice : public AMateria
{
	private:

	protected:

	public:
		Ice(void);
		Ice(const Ice &src);
		Ice(const std::string type);
		virtual ~Ice(void);

		Ice			&operator=(const Ice &src);

		virtual AMateria	*clone(void) const;
		virtual void	use(ICharacter&);
};

#endif
