/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xxxxxxx <xxxxxxx@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 12:13:40 by xxxxxxx           #+#    #+#             */
/*   Updated: 2023/04/26 14:47:55 by xxxxxxx          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/PmergeMe.hpp"

int main(int argc, char *argv[])
{
    if (argc == 1)
    {
        std::cout << "Usage: ./PmergeMe <list of positive integers>" << std::endl;
        return 1;
    }

    PmergeMe sorter(argc - 1, argv + 1);
    if (!sorter.isValid())
        return 1;
    sorter.sort();
}