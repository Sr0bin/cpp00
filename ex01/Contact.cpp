/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rorollin <rorollin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 18:48:52 by rorollin          #+#    #+#             */
/*   Updated: 2026/02/17 21:06:36 by rorollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "io.hpp"
#include <iostream>
#include <iomanip>

Contact::Contact()
{ 
	// print_default_constructor("Contact");
}

Contact::Contact(std::string name, std::string lastName, std::string nickname,
		 std::string phoneNumber, std::string darkestSecret) : _name(name) , _lastName(lastName), _nickname(nickname),
		 _phoneNumber(phoneNumber), _darkestSecret(darkestSecret)
	{
	// print_parametrized_constructor("Contact");
};

Contact::~Contact()
{
	// print_destructor("Contact");
}

void	Contact::printFullContact()
{
	printTrunc(this->_name, "|");
	printTrunc(this->_lastName, "|");
	printTrunc(this->_nickname, "|");
	printTrunc(this->_phoneNumber, "|");
	printTrunc(this->_darkestSecret, "|");
	std::cout << "\n";

}

void	Contact::printContact()
{
	printTrunc(this->_name, "|");
	printTrunc(this->_lastName, "|");
	printTrunc(this->_nickname, "|");
	std::cout << "\n";

}
void	Contact::setContact(std::string name)
{
	this->_name = name;
}
