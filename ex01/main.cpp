/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rorollin <rorollin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 12:11:37 by rorollin          #+#    #+#             */
/*   Updated: 2026/02/17 22:36:22 by rorollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "io.hpp"
#include <iostream>
#include <string>


int	main()
{
	PhoneBook phonebook;

	std::cout << "Welcome to this phonebook ! Please enter a valid command :\n\
SEARCH, ADD, or EXIT !\n";
	while (true)
	{
		switch (getCommand())
		{
			case (ADD):
				{
					Contact cont = cinContact();
					if (std::cin.eof())
						break;
					phonebook.addContact(cont);
					break;
				}
			case (SEARCH):
				{
					phonebook.displayPhonebook();
					break;
				}
			case (INVALID):
				{
					std::cout << "Please enter a valid command : SEARCH, ADD or EXIT\n";
					break;
				}
			case (EXIT):
				{
					std::cout << "Exiting, thanks for searching !\n";
					return (0);
				}
			case (ENDOFFILE):
				{
					std::cout << "EOF detected.\n";
					return (0);
				}
		}
	}
}
