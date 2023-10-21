/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xxxxxxx <xxxxxxx@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 14:03:26 by xxxxxxx           #+#    #+#             */
/*   Updated: 2022/05/16 10:44:42 by xxxxxxx          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->index = 0;
	for (size_t i = 0; (int)i < 8; i++)
	{
		this->contacts[i] = new Contact(NULL, NULL);
	}
}

PhoneBook::~PhoneBook()
{
	for (size_t i = 0; (int)i < 8; i++)
	{
		delete this->contacts[i];
	}
}

void PhoneBook::add_contact(void)
{
	contacts[this->index] = new Contact();
	this->index++;
	this->index %= 8;
}

void PhoneBook::print_book(void)
{
	int size;
	for (size_t i = 0; i < 8; i++) {
		for (size_t j = 0; j < 9; j++)
		{
			std::cout << " ";
		}
		std::cout << i<< " | ";
		size = this->contacts[i]->get_firstname().length();
		if (size <= 10)
			for (size_t j = 0; (int)j < 10 - size; j++) {
				std::cout << " " ;
			}
		for (size_t j = 0; (int)j < fmin(10, size); j++) {
			if (size <= 10 || j != 9)
				std::cout << this->contacts[i]->get_firstname()[j];
			else
				std::cout << ".";
		}
		std::cout << " | ";
		size = this->contacts[i]->get_lastname().length();
		if (size <= 10)
			for (size_t j = 0; (int)j < 10 - size; j++) {
				std::cout << " " ;
			}
		for (size_t j = 0; (int)j < fmin(10, size); j++) {
			if (size <= 10 || j != 9)
				std::cout << this->contacts[i]->get_lastname()[j];
			else
				std::cout << ".";
		}
		std::cout << " | ";
		size = this->contacts[i]->get_nickname().length();
		if (size <= 10)
			for (size_t j = 0; (int)j < 10 - size; j++) {
				std::cout << " " ;
			}
		for (size_t j = 0; (int)j < fmin(10, size); j++) {
			if (size <= 10 || j != 9)
				std::cout << this->contacts[i]->get_nickname()[j];
			else
				std::cout << ".";
		}
		std::cout << '\n';
	}
}

void	PhoneBook::print_contact(int i)
{
	if (i < 8 & i >= 0 && this->contacts[i]->get_firstname() != "")
	{
		std::cout << "Firstname : " << this->contacts[i]->get_firstname() << '\n';
		std::cout << "Lastname : " << this->contacts[i]->get_lastname() << '\n';
		std::cout << "Nickname : " << this->contacts[i]->get_nickname() << '\n';
		std::cout << "Darkest Secret : " << this->contacts[i]->get_darkestsecret() << '\n';
		std::cout << "Phone : " << this->contacts[i]->get_phone() << '\n';
	}
	else
	{
		std::cout << "LMAO you cannot count dumbass <.<" << '\n';
	}
}
