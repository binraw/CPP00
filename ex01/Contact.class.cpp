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

Contact::Contact(): index(-1), name(""), lastname(""), nickname(""), nb(""), secret("")
{

}
Contact::Contact(int index, std::string name,std::string lastname, std::string nickname, std::string nb, std::string secret)
{       
        this->index = index;
        this->name = name;
        this->lastname = lastname;
        this->nickname = nickname;
        this->nb = nb;
        this->secret = secret;
}


Contact::~Contact()
{

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

int	Contact::get_index(void) const
{ 
        return this->index; 
}
void    Contact::set_index(int idx)
{
        this->index = idx; 
}