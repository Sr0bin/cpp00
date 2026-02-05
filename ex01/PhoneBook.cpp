/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rorollin <rorollin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 10:23:45 by rorollin          #+#    #+#             */
/*   Updated: 2026/02/05 17:55:06 by rorollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "print.hpp"
#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : added_contact(0)
{
	print_default_constructor("PhoneBook");
}

PhoneBook::~PhoneBook()
{
	print_destructor("PhoneBook");
}

void PhoneBook::addContact(Contact new_contact)
{
	contactList[added_contact++ % MAX_CONTACT] = new_contact;
}
Contact* PhoneBook::searchContact()
{
	for (size_t i = 0; i < added_contact && i < MAX_CONTACT ; i++)
		contactList[i].printContact();
	return NULL;
}
