/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xxxxxxx <xxxxxxx@student.42.fr>              +#+  +:+       +#+      */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 07:55:58 by xxxxxxx            #+#    #+#            */
/*   Updated: 2022/05/30 09:58:40 by xxxxxxx           ###   ########.fr      */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

/***********************
*	Constructors & Destructor
***********************/

template <class T>
MutantStack<T>::MutantStack(void)
{
	return ;
}

template <class T>
MutantStack<T>::MutantStack(const MutantStack<T> &src)
{
	*this = src;
	return ;
}

template <class T>
MutantStack<T>::~MutantStack(void)
{
	return ;
}

/***********************
*	Assignation Operators
***********************/

template <class T>
MutantStack<T>	&MutantStack<T>::operator=(const MutantStack<T> &src)
{
	(void) src;
	return (*this);
}

/***********************
*	Boolean Operators
***********************/

/***********************
*	Arithmetic Operators
***********************/

/***********************
*	Stream Operators
***********************/

/***********************
*	Getter & Setters
***********************/

/***********************
*	Methods
***********************/

template <class T>
typename MutantStack<T>::iterator	MutantStack<T>::begin(void)
{
	return(this->c.begin());
}

template <class T>
typename MutantStack<T>::iterator	MutantStack<T>::end(void)
{
	return(this->c.end());
}
