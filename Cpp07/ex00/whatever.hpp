/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdehais <bdehais@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 08:21:00 by bdehais           #+#    #+#             */
/*   Updated: 2022/06/02 13:32:52 by bdehais          ###   ########.fr       */
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
