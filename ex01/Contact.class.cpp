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

/*Contact::Contact(const std::string& n, const std::string& ln, const std::string& nn, const std::string& numb, const std::string& s) : name(n), lastname(ln)*/
/*	, nickname(nn), nb(numb), secret(s))*/
/*{*/
/*}*/

Contact::~Contact() {
}


void Contact::display() const
{
std::cout << "Name: " << name << "\nLastname:" << lastname << "\nNickname" << nickname << "\nNumber :" << nb << "\nSecret:" << secret << std::endl;
}
