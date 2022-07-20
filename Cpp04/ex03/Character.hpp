/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdehais <bdehais@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 08:02:34 by bdehais           #+#    #+#             */
/*   Updated: 2022/05/24 16:54:35 by bdehais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"

class AMateria ;

class Character : public ICharacter
{
	private:
		AMateria	*inv[4];
		std::string	name;

	public:
		Character(void);
		Character(Character const &src);
		Character(std::string const &name);
		~Character(void);

		Character	&operator=(Character const &src);

		virtual std::string const & getName() const;

		virtual void equip(AMateria* m);
		virtual void unequip(int idx);
		virtual void use(int idx, ICharacter& target);
};

#endif
