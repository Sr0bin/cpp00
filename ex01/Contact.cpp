/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rorollin <rorollin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 18:48:52 by rorollin          #+#    #+#             */
/*   Updated: 2026/01/30 13:52:50 by rorollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "print.hpp"
#include <iostream>

Contact::Contact()
{ 
	print_default_constructor("Contact");
}

Contact::Contact(std::string name) : _name(name) {
	print_parametrized_constructor("Contact");
};

Contact::~Contact()
{
	print_destructor("Contact");
}

void	Contact::printContact()
{
	std::cout << this->_name << std::endl;
}
void	Contact::setContact(std::string name)
{
	this->_name = name;
}
