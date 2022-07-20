/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdehais <bdehais@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 13:07:32 by bdehais           #+#    #+#             */
/*   Updated: 2022/05/16 10:42:02 by bdehais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(int argc,char*argv[])
{
	if(argc<2){
		std::cout<<"* LOUD AND UNBEARABLE FEEDBACK NOISE *"<<std::endl;
	}else{
		for(size_t i=1;(int)i<argc;i++){
			while(*argv[i])
				std::cout<<(char)toupper(*(argv[i]++));}
			std::cout<<std::endl;
		}
	return 0;
}
