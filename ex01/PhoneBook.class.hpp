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
#include <sstream>
#include <iostream>
#include "Contact.class.hpp"

class PhoneBook
{

	public :
	PhoneBook(void);
	~PhoneBook(void);
	void add_contact(const Contact& contact);
	void display_all_contact(void) const;
	int search_contact(void);

	private:
	Contact contacts[8];
	int contact_count;
	int	next_index;

};

#endif
