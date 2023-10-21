/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xxxxxxx <xxxxxxx@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 12:16:14 by xxxxxxx           #+#    #+#             */
/*   Updated: 2022/04/01 12:30:01 by xxxxxxx          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon {
private:
	std::string	type;

public:
	Weapon(void);
	Weapon(std::string name);
	~Weapon(void);
	void		setType(std::string type);
	std::string	getType(void);
};

Weapon &getType(void);
void setType(std::string type);

#endif
