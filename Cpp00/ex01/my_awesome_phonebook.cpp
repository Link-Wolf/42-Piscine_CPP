/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_awesome_phonebook.cpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xxxxxxx <xxxxxxx@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 14:06:32 by xxxxxxx           #+#    #+#             */
/*   Updated: 2022/05/16 10:44:56 by xxxxxxx          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <cstdlib>

int main(void)
{
	PhoneBook	phonebook;
	std::string	tmp;
	std::string	order;
	std::string	i;

	std::cout << "Welcome to ur brand new and modern pHoNeBoOk\nPlease select one of our wonderful, marvelous, SPLENDIDE instructions :\n\t- ADD\n\t- SEARCH\n\t- EXIT\n\n";
	while (1)
	{
		std::cout << "> ";
		std::getline(std::cin, order);
		if (order == "EXIT")
			break;
		else if (order == "ADD")
		{
			phonebook.add_contact();
		}
		else if (order == "SEARCH")
		{
			phonebook.print_book();
			std::cout << "\nHere is all i have\nNow give me the index u want, my dude" << '\n';
			std::getline(std::cin, i);
			phonebook.print_contact(std::stoi(i));
		}
		else
		{
			std::cout << "Dude...wtf ?!\nI let you think a little about ur condition and how do u want to use me, come back when you'll be trully ready" << '\n';
		}
	}
}
