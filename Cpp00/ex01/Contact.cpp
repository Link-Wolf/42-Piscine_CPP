/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xxxxxxx <xxxxxxx@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 14:03:38 by xxxxxxx           #+#    #+#             */
/*   Updated: 2022/03/30 13:51:28 by xxxxxxx          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void *useless, void *useless2)
{
	this->firstname = "";
	this->lastname = "";
	this->nickname = "";
	this->darkestsecret = "";
	this->phone = "";
	(void) useless;
	(void) useless2;
}

Contact::Contact()
{
	std::cout << "Okay ma boi so hear me out\n";

	std::cout << "(☞ ಠ_ಠ)☞ firstname ?" << '\n';
	std::getline(std::cin, this->firstname);
	while (this->firstname == "")
	{
		std::cout << "(ﾒ` ﾛ ´)︻デ═一 hem..i said : FIRSTNAME ? pls" << '\n';
		std::getline(std::cin, this->firstname);
	}
	std::cout << "(☞ ಠ_ಠ)☞ lastname ?" << '\n';
	std::getline(std::cin, this->lastname);
	while (this->lastname == "")
	{
		std::cout << "(ﾒ` ﾛ ´)︻デ═一 hem..i said : LASTNAME ? pls" << '\n';
		std::getline(std::cin, this->lastname);
	}
	std::cout << "(☞ ಠ_ಠ)☞ nickname ?" << '\n';
	std::getline(std::cin, this->nickname);
	while (this->nickname == "")
	{
		std::cout << "(ﾒ` ﾛ ´)︻デ═一 hem..i said : NICKNAME ? pls" << '\n';
		std::getline(std::cin, this->nickname);
	}
	std::cout << "(☞ ಠ_ಠ)☞ darkest secret ?" << '\n';
	std::getline(std::cin, this->darkestsecret);
	while (this->darkestsecret == "")
	{
		std::cout << "(ﾒ` ﾛ ´)︻デ═一 hem..i said : DARKEST SECRET ? pls" << '\n';
		std::getline(std::cin, this->darkestsecret);
	}
	std::cout << "(☞ ಠ_ಠ)☞ phone number ?" << '\n';
	std::getline(std::cin, this->phone);
	while (this->phone == "")
	{
		std::cout << "(ﾒ` ﾛ ´)︻デ═一 hem..i said : PHONE ? pls" << '\n';
		std::getline(std::cin, this->phone);
	}
	std::cout << "Well done ma boi\n";
}

Contact::Contact(Contact *contact)
{
	this->firstname = contact->firstname;
	this->lastname = contact->lastname;
	this->nickname = contact->nickname;
	this->darkestsecret = contact->darkestsecret;
	this->phone = contact->phone;
}

Contact::~Contact()
{
	return ;
}

std::string Contact::get_lastname()
{
	return this->lastname;
}

std::string Contact::get_nickname()
{
	return this->nickname;
}

std::string Contact::get_firstname()
{
	return this->firstname;
}

std::string Contact::get_darkestsecret()
{
	return this->darkestsecret;
}

std::string Contact::get_phone()
{
	return this->phone;
}

void Contact::set_lastname(std::string lname)
{
	this->lastname = lname;
}

void Contact::set_nickname(std::string nname)
{
	this->nickname = nname;
}

void Contact::set_firstname(std::string fname)
{
	this->firstname = fname;
}

void Contact::set_darkestsecret(std::string secret)
{
	this->darkestsecret = secret;
}

void Contact::set_phone(std::string phone)
{
	this->phone = phone;
}
