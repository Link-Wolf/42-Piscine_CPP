/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xxxxxxx <xxxxxxx@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 16:51:08 by xxxxxxx           #+#    #+#             */
/*   Updated: 2022/05/19 13:48:53 by xxxxxxx          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H

#include <iostream>
#include <string>
#include <cmath>

class Fixed
{
private:
	const static int	nb_fract_bit = 0x8;
	int					raw_bits;

public:
	Fixed(void);
	Fixed(Fixed const &src);
	~Fixed(void);

	Fixed(const int n);
	Fixed(const float f);

	Fixed				&operator=(Fixed const &rhs);
	Fixed				&operator++(void);
	Fixed				&operator--(void);
	Fixed				operator++(int);
	Fixed				operator--(int);
	bool				operator>(Fixed const &f);
	bool				operator<(Fixed const &f);
	bool				operator>=(Fixed const &f);
	bool				operator<=(Fixed const &f);
	bool				operator==(Fixed const &f);
	bool				operator!=(Fixed const &f);
	Fixed				operator+(Fixed const &f);
	Fixed				operator-(Fixed const &f);
	Fixed				operator*(Fixed const &f);
	Fixed				operator/(Fixed const &f);

	int					getRawBits(void) const;
	void				setRawBits(int const raw);
	float				toFloat(void) const;
	int					toInt(void) const;
	static Fixed		&min(Fixed &f1, Fixed &f2);
	static Fixed		&max(Fixed &f1, Fixed &f2);
	static const Fixed	&min(const Fixed &f1, const Fixed &f2);
	static const Fixed	&max(const Fixed &f1, const Fixed &f2);
};

std::ostream	&operator<<(std::ostream &o, Fixed const &f);

#endif
