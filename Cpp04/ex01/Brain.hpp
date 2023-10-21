/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xxxxxxx <xxxxxxx@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 08:23:40 by xxxxxxx           #+#    #+#             */
/*   Updated: 2022/05/24 16:54:00 by xxxxxxx          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>
#include <cstdlib>

class Brain
{
	private:
		std::string	ideas[100];
		std::string	randomIdea(void);

	protected:

	public:
		Brain(void);
		Brain(Brain const &src);
		~Brain(void);

		Brain	&operator=(Brain const &src);

		void	printIdea(int i);
};

#endif








/*
ein imher narh strom


--- ----------------
ein himmernhartstrom
ooooxxoxxxxxxxxxxxxo
ein eimernhartstroem
ooooxxooooxxxooooxxo
ein ihmernarhtstreom
oooooxoooooxoooooxxo
ein immernachtstraum
oooooooooooooooooooo
*/
