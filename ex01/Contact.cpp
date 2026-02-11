/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rorollin <rorollin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 18:48:52 by rorollin          #+#    #+#             */
/*   Updated: 2026/02/11 11:10:54 by rorollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "print.hpp"
#include <iostream>
#include <iomanip>

Contact::Contact()
{ 
	print_default_constructor("Contact");
}

Contact::Contact(std::string name, std::string lastName, std::string nickname,
		 std::string phoneNumber, std::string darkestSecret) : _name(name) , _lastName(lastName), _nickname(nickname),
		 _phoneNumber(phoneNumber), _darkestSecret(darkestSecret)
	{
	print_parametrized_constructor("Contact");
};

Contact::~Contact()
{
	print_destructor("Contact");
}

void	Contact::printContact()
{
	std::cout << std::setw(10);
	std::cout << this->_name << "|";
	std::cout << this->_lastName << "|";
	std::cout << this->_nickname << "|\n";

}
void	Contact::setContact(std::string name)
{
	this->_name = name;
}
