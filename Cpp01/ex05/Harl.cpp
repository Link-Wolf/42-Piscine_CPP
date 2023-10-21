/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xxxxxxx <xxxxxxx@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 11:50:11 by xxxxxxx           #+#    #+#             */
/*   Updated: 2022/05/18 13:16:12 by xxxxxxx          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl ()
{
}

Harl::~Harl ()
{
}

void Harl::complain(std::string level)
{
	int stop = 0;

	void (Harl::*f[4])(void) = {&Harl::debug,		//EXPLAIN IKAR
                                &Harl::info,
                                &Harl::warning,
                                &Harl::error };
 	std::string message[4] = { "DEBUG", "INFO", "WARNING", "ERROR" };

 	for (int i = 0 ; i < 4 ; i++) {
    	if (level == message[i]) {
			(this->*(f[i]))();
			stop = 1;
		}
	}
	if (!stop)
		std::cout << "Invalid instruction. Available : DEBUG, INFO, WARNING, ERROR\n";
}

void Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-\
ketchup burger. I really do!\n";
}

void Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put\
enough bacon in my burger! If you did, I wouldn’t be asking for more!\n";
}

void Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for\
 years whereas you started working here since last month.\n";
}

void Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now.\n";
}
