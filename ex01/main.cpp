/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rorollin <rorollin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 12:11:37 by rorollin          #+#    #+#             */
/*   Updated: 2026/02/05 20:56:25 by rorollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <string>


int	main()
{
	PhoneBook phonebook;
	for (int i = 0; i < 20 ; i++)
	{
		Contact contact("test");
		phonebook.addContact(contact);
	}
	phonebook.searchContact();
}
