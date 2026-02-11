/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rorollin <rorollin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 12:11:37 by rorollin          #+#    #+#             */
/*   Updated: 2026/02/11 11:11:45 by rorollin         ###   ########.fr       */
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
		Contact contact("test", "Lastname", "nickname", "phonenumber", "darkest");
		phonebook.addContact(contact);
	}
	phonebook.searchContact();
}
