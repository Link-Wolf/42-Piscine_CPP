/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xxxxxxx <xxxxxxx@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 07:56:03 by xxxxxxx           #+#    #+#             */
/*   Updated: 2022/07/11 12:34:36 by xxxxxxx          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <string>
#include <stack>

template <class T>
class MutantStack : public std::stack<T>
{
	private:

	protected:

	public:
		typedef typename std::stack<T>::container_type::iterator iterator;
		MutantStack<T>(void);
		MutantStack<T>(const MutantStack<T> &src);
		~MutantStack<T>(void);

		MutantStack<T>	&operator=(const MutantStack<T> &src);

		iterator	begin(void);
		iterator	end(void);
};

#endif
