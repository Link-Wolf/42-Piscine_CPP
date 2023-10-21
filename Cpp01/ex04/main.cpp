/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xxxxxxx <xxxxxxx@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 13:40:33 by xxxxxxx           #+#    #+#             */
/*   Updated: 2022/05/18 13:05:59 by xxxxxxx          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <sstream>
#include <fstream>

int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		std::cerr << "Usage : filename s1 s2" << std::endl;
		return (1);
	}

	std::string	path = argv[1];
	std::string	s1 = argv[2];
	std::string	s2 = argv[3];

	if (s1.empty())
	{
		std::cerr << "s1 can't be empty" << '\n';
		return (1);
	}

	std::ifstream	infile(path); //Fichier en param
	std::ofstream	outfile(path + ".replace"); //Fichier .replace

	std::stringstream buffer; //Objet buffer
	buffer << infile.rdbuf(); //Copie contenue de infile dans objet buffer (stocké en constant)

	std::string str = buffer.str(); //recup contenu de buff dans un string exploitable
	std::string::size_type pos = str.find(s1, 0); //trouver position de s1
	while (pos != std::string::npos) //npos = code de non trouvage (aka -1 aka bcp bcp)
	{
		str.erase(pos, s1.size()).insert(pos, s2); //erase + insert (replace but legal)
		pos = str.find(s1, pos + 1);
	}
	outfile << str; //output le res dans le fichier .replace
}
