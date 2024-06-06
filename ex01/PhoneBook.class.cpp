/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtruvelo <rtruvelo@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 11:18:44 by rtruvelo          #+#    #+#             */
/*   Updated: 2024/05/28 15:31:13 by rtruvelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "PhoneBook.class.hpp"

#include "Contact.class.hpp"
/*PhoneBook::PhoneBook(void)*/
/*{*/
/*	std::cout << "Class PhoneBook created" << std::endl;*/
/*	return;*/
/*}*/

PhoneBook::~PhoneBook(void)
{
std::cout << "destructor PhoneBook called" << std::endl;
	return;
}

void PhoneBook::add_contact(const Contact& contact)
{
	if (contact_count < 8)
	{
		contacts[contact_count] = contact;
		contact_count++;
		std::cout<< "contact ajouter au phonebook"<< std::endl;
	}
}

void PhoneBook::display_all_contact(void) const
{
	for (int i = 0; i < contact_count; i++)
	{
		std::cout << "contact : " << i << std::endl;
		contacts[i].display();	

	}
}


