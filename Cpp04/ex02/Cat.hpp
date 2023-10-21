/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xxxxxxx <xxxxxxx@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 07:19:26 by xxxxxxx           #+#    #+#             */
/*   Updated: 2022/05/24 16:54:15 by xxxxxxx          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal
{
	private:
		Brain	*brain;

	public:
		Cat(void);
		Cat(Cat const &src);
		~Cat(void);

		Cat	&operator=(Cat const &src);

		Brain	*getBrain(void)	const;

		void	makeSound(void) const;
};

#endif
