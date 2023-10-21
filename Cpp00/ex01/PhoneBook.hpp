/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xxxxxxx <xxxxxxx@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 14:03:29 by xxxxxxx           #+#    #+#             */
/*   Updated: 2022/03/30 12:55:47 by xxxxxxx          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK
#define PHONEBOOK

#include <iostream>
#include <cmath>
#include <string>
#include "Contact.hpp"

class PhoneBook {
private:
	int		index;
	Contact	*contacts[8];

public:
	PhoneBook();
	~PhoneBook();
	void	add_contact(void);
	void	print_book(void);
	void	print_contact(int i);
};

#endif
