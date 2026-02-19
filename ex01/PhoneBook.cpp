/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rorollin <rorollin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 10:23:45 by rorollin          #+#    #+#             */
/*   Updated: 2026/02/19 20:27:51 by rorollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "io.hpp"
#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip>

PhoneBook::PhoneBook() : added_contact(0)
{
	// print_default_constructor("PhoneBook");
}

PhoneBook::~PhoneBook()
{
	// print_destructor("PhoneBook");
}

void PhoneBook::addContact(Contact new_contact)
{
	contactList[added_contact++ % MAX_CONTACT] = new_contact;
}

void	PhoneBook::printHeader()
{
	std::string	strings[] = 
		{"Index",
		"First Name", 
		"Last Name",
		"Nickname"};
	size_t	nbr_elem = sizeof(strings) / sizeof(strings[0]);
	
	for (size_t	size = 0; size < nbr_elem; size++)
		printTrunc(strings[size], "|");
	size_t len = (10 * nbr_elem) + nbr_elem;
	std::cout << "\n";
	for (size_t i = 0; i < len; i++)
		std::cout << "=";
	std::cout << "\n";
}

void	PhoneBook::displayPhonebook()
{	
	printHeader();
	for (size_t i = 0; i < added_contact && i < MAX_CONTACT; i++)
	{
		printTrunc(i, "|");
		contactList[i].printContact();
	}
	if (added_contact == 0)
		return ;
	size_t	index = 0;
	while (true)
	{
		index = askSizetUser("Please choose the index of the contact you want to display :");
		if (std::cin.eof())
			return ;
		if (index >= added_contact || index >= MAX_CONTACT) 
		{
			std::cout << "Index out of phonebook range.\n";
			continue ;
		}
		else
			break;
	}
	std::cout << "=======================================\n";
	contactList[index].printFullContact();
}

Contact* PhoneBook::searchContact()
{
	for (size_t i = 0; i < added_contact && i < MAX_CONTACT; i++)
	{
		printTrunc(i, "|");
		contactList[i].printContact();
	}
	return NULL;
}
