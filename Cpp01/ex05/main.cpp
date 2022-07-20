/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdehais <bdehais@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 12:01:54 by bdehais           #+#    #+#             */
/*   Updated: 2022/04/05 12:19:06 by bdehais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char *argv[]) {

	Harl harl;

	if (argc != 2){
		std::cout << "Usage : ./ex05 [DEBUG/INFO/WARNING/ERROR]\n";
		exit(0);
	}
	harl.complain(argv[1]);
}
