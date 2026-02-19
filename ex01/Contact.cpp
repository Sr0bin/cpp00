/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rorollin <rorollin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 18:48:52 by rorollin          #+#    #+#             */
/*   Updated: 2026/02/19 20:15:21 by rorollin         ###   ########.fr       */
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

	std::cout << "First Name : " << this->_name << std::endl;
	std::cout << "Last name : " << this->_lastName << std::endl;
	std::cout << "Nickname : " << this->_nickname << std::endl;
	std::cout << "Phone Number : " << this->_phoneNumber << std::endl;
	std::cout << "Darkest Secret : " << this->_darkestSecret << std::endl;
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
