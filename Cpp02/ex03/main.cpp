/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xxxxxxx <xxxxxxx@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 16:12:25 by xxxxxxx           #+#    #+#             */
/*   Updated: 2022/05/19 15:53:11 by xxxxxxx          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main(void)
{
	Point a(-4, 2);
	Point b(-4, -5);
	Point c(4, 2);

	Point sbeul(98, 1);
	Point h(0.6099218999467f, 2.0f);

	// std::cout << bsp(a, b, c, d) << std::endl;
	// std::cout << bsp(a, b, c, e) << std::endl;
	// std::cout << bsp(a, b, c, f) << std::endl;
	// std::cout << bsp(a, b, c, sbeul) << std::endl;
	std::cout << bsp(a, b, c, h) << std::endl;
}
