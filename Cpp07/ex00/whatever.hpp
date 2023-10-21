/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xxxxxxx <xxxxxxx@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 08:21:00 by xxxxxxx           #+#    #+#             */
/*   Updated: 2022/06/02 13:32:52 by xxxxxxx          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <class T>
void	swap(T &a, T &b)
{
	T	tmp;

	tmp = a;
	a = b;
	b = tmp;
}

template <class T>
T	min(T a, T b)
{
	return (a < b ? a : b);
}

template <class T>
T	max(T a, T b)
{
	return (a > b ? a : b);
}
