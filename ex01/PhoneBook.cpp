/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rorollin <rorollin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 10:23:45 by rorollin          #+#    #+#             */
/*   Updated: 2026/01/30 13:51:00 by rorollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "print.hpp"
#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	print_default_constructor("PhoneBook");
}

PhoneBook::~PhoneBook()
{
	print_destructor("PhoneBook");
}

Contact PhoneBook::searchContact(size_t n)
{
	return (this->contactList[n]);
}
