/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xxxxxxx <xxxxxxx@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 12:13:44 by xxxxxxx           #+#    #+#             */
/*   Updated: 2023/05/04 13:16:45 by xxxxxxx          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <string>
#include <chrono>

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#ifndef K
#define K 100
#endif

class PmergeMe
{
private:
    std::vector<int> _vector;
    std::set<int> _set;
    bool _valid;

public:
    PmergeMe();
    PmergeMe(PmergeMe const &src);
    PmergeMe(int nb_args, char **args);
    ~PmergeMe(void);

    PmergeMe &operator=(PmergeMe const &rhs);

    void sort();
    std::vector<int> sort_vector(std::vector<int>::iterator begin, std::vector<int>::iterator end);
    std::set<int> sort_set(std::set<int>::iterator begin, std::set<int>::iterator end);

    bool isValid() const;

    void print_before();
    void print_after(std::vector<int> &v);
};

#endif