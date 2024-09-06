/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtruvelo <rtruvelo@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 10:48:32 by rtruvelo          #+#    #+#             */
/*   Updated: 2024/05/28 15:35:18 by rtruvelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP
#include <string>

#include <ostream>

#include <iostream>
#include "Contact.class.hpp"

class PhoneBook
{

	public :

	PhoneBook(void) : contact_count(0), next_index(0){
	}
	~PhoneBook(void);

	void add_contact(const Contact& contact);
	void display_all_contact(void) const;
	void search_contact(void);

	private:
	Contact contacts[8];
	int contact_count = 0;
	int	next_index = 0;

};

#endif
