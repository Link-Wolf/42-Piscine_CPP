/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xxxxxxx <xxxxxxx@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 10:39:30 by xxxxxxx           #+#    #+#             */
/*   Updated: 2022/06/02 13:32:56 by xxxxxxx          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

int main(void)
{
	Array<int> a(5);

	std::cout << a[2] << std::endl;
	Array<int> b = a;
	a[2] = 42;
	std::cout << "a: " << a[2] << "\nb: " << b[2] << std::endl;
	return 0;
}
