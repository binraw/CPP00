/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtruvelo <rtruvelo@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 13:50:49 by rtruvelo          #+#    #+#             */
/*   Updated: 2024/05/28 15:55:24 by rtruvelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Contact.class.hpp"


Contact::~Contact() {
}

void Contact::display() const 
{
        std::cout << std::setw(10) << std::right << truncate(name) << '|'
                  << std::setw(10) << std::right << truncate(lastname) << '|'
                  << std::setw(10) << std::right << truncate(nickname) << '|'
                  << std::endl;
}

void Contact::display_secret() const 
{
        std::cout << std::setw(10) << std::right << truncate(name) << '|'
	 			<< std::endl
                << std::setw(10) << std::right << truncate(lastname) << '|'
 				<< std::endl
                << std::setw(10) << std::right << truncate(nickname) << '|'
 				<< std::endl
				<< std::setw(10) << std::right << truncate(nb) << '|'
				<< std::endl
                  << std::setw(10) << std::right << truncate(secret) << '|'
                  << std::endl;
}

std::string Contact::truncate(const std:: string str) const
{
	if (str.length() > 9)
		return str.substr(0,9) + ".";
	return str;
}
