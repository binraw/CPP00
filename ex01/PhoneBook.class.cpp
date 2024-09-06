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
		contacts[contact_count].set_index(contact_count);
		contact_count++;	
	}
	else 
	{
		contacts[next_index] = contact;
		contacts[next_index].set_index(next_index);
		next_index = (next_index + 1) % 8;
	}
	
	std::cout<< "contact ajouter au phonebook"<< std::endl;
}

void PhoneBook::display_all_contact(void) const
{
	std::cout << std::setw(10) << std::right << "Index" << '|'
				<< std::setw(10) << std::right << "Name" << '|'
                  << std::setw(10) << std::right << "Lastname" << '|'
                  << std::setw(10) << std::right << "Nickname" << '|'
                  << std::endl;

	for (int i = 0; i < contact_count; i++)
	{
		std::cout << std::setw(10) << std::right << contacts[i].get_index() << '|';
		contacts[i].display();	
	}
}

void PhoneBook::search_contact(void)
{
        display_all_contact();
		std::string input;
        std::cout << "Enter the index of the contact to view details: ";
        std::cin >> input;
 try {
             int index = std::stoi(input);

            if (index >= 0 && index < contact_count) {
                contacts[index].display_secret();
            } else {
                std::cout << "Index out of range. Please enter a valid index." << std::endl;
            }
        } catch (const std::invalid_argument&) {
            std::cout << "Invalid input. Please enter a valid index." << std::endl;
        } catch (const std::out_of_range&) {
            std::cout << "Index out of range. Please enter a valid index." << std::endl;
	} 
}
