/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xxxxxxx <xxxxxxx@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 10:39:32 by xxxxxxx           #+#    #+#             */
/*   Updated: 2022/06/02 13:32:55 by xxxxxxx          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <string>
#include <stdexcept>

template<class T>
class Array
{
	private:
		T		*data;
		size_t	_size;

	public:
		Array(void)
		{
			this->data = nullptr;
			this->_size = 0;
			return ;
		}
		Array(unsigned int n)
		{
			this->data = new T[n];
			this->_size = n;
			return ;
		}
		Array(const Array &src)
		{
			*this = src;
			return ;
		}
		~Array(void)
		{
			delete [] this->data;
			return ;
		}

		Array	&operator=(const Array &src)
		{
			this->_size = src.getSize();
			delete [] this->data;
			this->data = new T[this->_size];
			for (size_t i = 0; i < this->_size; i++) {
				this->data[i] = src.data[i];
			}
			return (*this);
		}

		T		&operator[](const size_t idx)
		{
			if (idx >= this->_size)
				throw std::exception();
			return (this->data[idx]);
		}

		const T	&operator[](const size_t idx) const
		{
			if (idx >= this->_size)
				throw std::exception();
			return (this->data[idx]);
		}

		int		getSize(void) const
		{
			return this->_size;
		}

		int	size(void) const
		{
			return this->_size;
		}
};

template<typename T>
std::ostream	&operator<<( std::ostream &ostr, const Array<T> &instance );

#endif
