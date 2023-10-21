/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xxxxxxx <xxxxxxx@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 11:14:05 by xxxxxxx           #+#    #+#             */
/*   Updated: 2023/04/26 11:46:29 by xxxxxxx          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <stack>
#include <cstring>

#ifndef RPN_HPP
#define RPN_HPP

class RPN
{
private:
    std::stack<double> _values;
    std::string _str;

public:
    RPN();
    RPN(std::string str);
    RPN(RPN const &rpn);
    ~RPN();

    RPN &operator=(RPN const &rpn);
    void calculate();
};

#endif