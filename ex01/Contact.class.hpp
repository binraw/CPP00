/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtruvelo <rtruvelo@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 13:50:46 by rtruvelo          #+#    #+#             */
/*   Updated: 2024/05/28 15:38:34 by rtruvelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

#include <string>
#include <ostream>
#include <iostream>
#include <iomanip>
class Contact {
public:
	Contact();
	Contact(int idx, const std::string n, const std::string ln, const std::string nn, const std::string numb, const std::string s);
	~Contact();
	void display(void) const;
	void display_secret(void) const;
	int	get_index(void) const;
	void set_index(int idx);
std::string truncate(const std:: string str) const;

private:
	int	index;
	std::string name;
	std::string lastname;
	std::string nickname;
	std::string  nb;
	std::string secret;
};



#endif
