/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xxxxxxx <xxxxxxx@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 14:07:01 by xxxxxxx           #+#    #+#             */
/*   Updated: 2022/03/30 12:50:18 by xxxxxxx          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT
#define CONTACT

#include <string>
#include <iostream>

class Contact {
private:
	std::string	firstname;
	std::string	lastname;
	std::string	nickname;
	std::string	darkestsecret;
	std::string	phone;

public:
	Contact();
	Contact(void *useless, void *useless2);
	Contact(Contact *contact);
	~Contact();
	std::string get_lastname();
	std::string get_nickname();
	std::string get_firstname();
	std::string get_darkestsecret();
	std::string get_phone();
	std::string set_lastname();
	std::string set_nickname();
	std::string set_firstname();
	std::string set_darkestsecret();
	void set_lastname(std::string lname);
	void set_nickname(std::string nname);
	void set_firstname(std::string fname);
	void set_darkestsecret(std::string secret);
	void set_phone(std::string phone);
};

#endif
