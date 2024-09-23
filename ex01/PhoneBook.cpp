/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtruvelo <rtruvelo@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 14:07:12 by rtruvelo          #+#    #+#             */
/*   Updated: 2024/05/28 16:11:58 by rtruvelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"
#include "Contact.class.hpp"
#include <string>
#include <iostream>

int main(void)
{
	PhoneBook phone;
	std::string buff;
	std::string name;
	std::string lastname;
	std::string nickname;
	std::string number;
	std::string secret;
	int index;
	index = 0;

	while (1)
	{
		std::cout << "Your command : ADD || SEARCH || EXIT" << std::endl;
		std::getline(std::cin, buff);
	  if (buff.empty()) 
		{
            std::cout << "Please enter a command: ";
            std::getline(std::cin, buff);
        }
		if ((buff.compare("ADD") == 0 || buff.compare("add") == 0) && buff.length() == 3)
		{
			std::cout << "Input your Name:";
			if (!std::getline(std::cin, name) || name.empty())
				return (1);
			std::cout << "Input your Lastname:";
			if (!std::getline(std::cin, lastname) || lastname.empty())
				return (1);
			std::cout << "Input your nickname:";
			if (!std::getline(std::cin, nickname) || nickname.empty())
				return (1);
			std::cout << "Input your Number:";
			if (!std::getline(std::cin, number) || number.empty())
				return (1);
			std::cout << "Input your Secret:";
			if (!std::getline(std::cin, secret) || secret.empty())
				return (1);
			Contact person(index, name, lastname, nickname, number, secret);
			phone.add_contact(person);
			std::cout << "You are enterred :" << "add comme commande" << std::endl;
		}
		else if ((buff == "SEARCH" || buff == "search") && buff.length() == 6)
		{
			if (phone.search_contact() == 1)
				return (1);
		}
		else if (buff == "EXIT" || buff == "exit")
			return (0);
		else
			std::cout << "Please enter a command valide: \n";
	}
	return 0;
	
}


