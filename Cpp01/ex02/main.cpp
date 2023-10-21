/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xxxxxxx <xxxxxxx@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 10:20:23 by xxxxxxx           #+#    #+#             */
/*   Updated: 2022/04/01 10:32:50 by xxxxxxx          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main(void)
{
	std::string	originalString = "HI THIS IS BRAIN";
	std::string *stringPTR = &originalString;
	std::string	&stringREF = originalString;

	std::cout << "Original string address: " << &originalString << '\n';
	std::cout << "using stringPTR: " << stringPTR << '\n';
	std::cout << "using stringREF: " << &stringREF << '\n';
	std::cout << "Original string: " << originalString << '\n';
	std::cout << "stringPTR: " << *stringPTR << '\n';
	std::cout << "stringREF: " << stringREF << '\n';
	return (0);
}
