/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xxxxxxx <xxxxxxx@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 07:19:39 by xxxxxxx           #+#    #+#             */
/*   Updated: 2022/05/24 16:53:52 by xxxxxxx          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
	private:

	protected:
		std::string	type;

	public:
		Animal(void);
		Animal(Animal const &src);
		virtual ~Animal(void);

		Animal		&operator=(Animal const &src);

		std::string	getType(void) const;

		virtual void	makeSound(void) const;
};

#endif
