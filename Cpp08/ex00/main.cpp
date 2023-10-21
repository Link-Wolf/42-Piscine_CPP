/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xxxxxxx <xxxxxxx@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 14:27:00 by xxxxxxx           #+#    #+#             */
/*   Updated: 2022/06/02 13:33:29 by xxxxxxx          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>
#include <vector>

int main(void)
{
	std::vector<int> v(5);
	v[0] = 0;
	v[1] = 0;
	v[2] = 0;
	v[3] = -1;
	v[4] = 42;

	std::cout << easyfind(v, 0) << std::endl;
	std::cout << easyfind(v, -1) << std::endl;
	std::cout << easyfind(v, 42) << std::endl;
	try
	{
		std::cout << easyfind(v, 3) << std::endl;
	}
	catch (std::exception e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}
