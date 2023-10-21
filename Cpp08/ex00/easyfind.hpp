/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xxxxxxx <xxxxxxx@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 14:26:58 by xxxxxxx           #+#    #+#             */
/*   Updated: 2022/06/02 13:33:29 by xxxxxxx          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <algorithm>

template <class T>
int	easyfind(T &container, int needle)
{
	typename T::iterator	i;

	i = find(container.begin(), container.end(), needle);
	if (i == container.end())
		throw std::exception();
	return *i;
}
