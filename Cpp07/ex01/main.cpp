/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xxxxxxx <xxxxxxx@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 10:26:30 by xxxxxxx           #+#    #+#             */
/*   Updated: 2022/06/02 13:32:54 by xxxxxxx          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <string>
#include <iostream>

template<typename T>
void display(T &value)
{
	std::cout << value << std::endl;
}

int main()
{
	int			arr1[3] = {1, 2, 3};
	std::string	arr2[3] = {"bim", "bam", "boom"};
	float		arr3[3] = {42.42f, -0.0f, 3.141592f};

	::iter(arr1, 3, &display);
	::iter(arr2, 3, &display);
	::iter(arr3, 3, &display);
	return 0;
}
