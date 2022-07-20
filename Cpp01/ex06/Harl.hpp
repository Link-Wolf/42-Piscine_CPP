/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdehais <bdehais@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 11:50:05 by bdehais           #+#    #+#             */
/*   Updated: 2022/04/05 12:01:39 by bdehais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <string>

class Harl {
private:

public:
	Harl ();
	~Harl ();
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);
	void complain(std::string level);
};

#endif
