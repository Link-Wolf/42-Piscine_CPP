/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xxxxxxx <xxxxxxx@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 11:23:16 by xxxxxxx           #+#    #+#             */
/*   Updated: 2023/04/26 17:43:36 by xxxxxxx          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <map>
#include <string>
#include <ctime>
#include <iomanip>
#include <regex>

class BitcoinExchange
{
private:
    std::map<std::string, double> _rates;
    static bool _is_valid_date(const std::string &date);
    static bool _is_valid_rate(const std::string &date);

public:
    BitcoinExchange(void);
    BitcoinExchange(const BitcoinExchange &src);
    BitcoinExchange(std::ifstream &file);
    ~BitcoinExchange(void);

    BitcoinExchange &operator=(const BitcoinExchange &rhs);

    void process(const std::string &line);
};