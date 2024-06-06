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
	while (1)
	{
		std::cout << "Your command : ADD || SEARCH || EXIT" << std::endl;
		std::cin >> buff;
		if (buff == "ADD" || buff == "add")
		{
				std::cout << "Input your Name:";
				std::cin >> name;
				std::cout << "Input your Lastname:";
				std::cin >> lastname;
				std::cout << "Input your nickname:";
				std::cin >> nickname;
				std::cout << "Input your Number:";
				std::cin >> number;
				std::cout << "Input your Secrect:";
				std::cin >> secret;

			Contact person(name, lastname, nickname, number, secret);
			phone.add_contact(person);

							

			std::cout << "You are enterred :" << "add comme commande" << std::endl;
		}
		else if (buff == "SEARCH" || buff == "search")
			{
			phone.display_all_contact();
			std::cout << "you are enterred : " << "search" << std::endl;
			}
		else if (buff == "EXIT" || buff == "exit")
		std::cout << "You are enterred :" << "exit" << std::endl;
		else
		return (1);
	}
	return 0;
	
}

//refaire le fait que les contact sont deja tous creer je dois juse changer les valeurs de chaque contacts en soit .
