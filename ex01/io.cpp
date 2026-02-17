/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   io.cpp                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rorollin <rorollin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 00:00:00 by rorollin          #+#    #+#             */
/*   Updated: 2026/02/17 21:22:14 by rorollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "io.hpp"
#include <iomanip>

void	print_default_constructor(std::string className)
{
	std::cout << "Default " << className << " constructor called\n";
}

void	print_parametrized_constructor(std::string className)
{
	std::cout << "Parametrized " << className << " constructor called\n";
}

void	print_destructor(std::string className)
{
	std::cout << className << " destructor called\n";
}

void	printTrunc(std::string str, std::string sep)
{
	std::cout << std::setw(10)<< std::right << strtrunc(str, 10) << sep;
}

void	printTrunc(size_t i, std::string sep)
{
	std::cout << std::setw(10)<< std::right << i << sep;
}

std::string	strtrunc(const std::string str, size_t width)
{
	if (str.length() > width)
		return (str.substr(0, width - 1) + ".");
	return (str);
}

Command	getCommand()
{
	std::string command;

	command = askUser("Please enter command :");
	if (std::cin.eof())
		return (ENDOFFILE);
	if (command == "ADD")
		return (ADD);
	if (command == "SEARCH")
		return (SEARCH);
	if (command == "EXIT")
		return (EXIT);
	return (INVALID);
}

size_t	asksizetUser(std::string question)
{
	size_t	answer = 0;

	std::cout << question << "\n";
	while (true)
	{
		std::cin >> answer;
		if (std::cin.fail())
		{
			std::cout << "Invalid integer input.\n";
			std::cin.clear();
			std::string trash;
			std::getline(std::cin, trash);
		}
		else
			break;
		std::cout << question << "\n";
	}
	std::cin.ignore();

	return (answer);
}

std::string	askUser(std::string question)
{
	std::string answer;

	std::cout << question << "\n";
	while (std::getline(std::cin, answer) && answer.length() == 0)
	{
		std::cout << question << "\n";
		if (std::cin.eof())
			return ("");
	}
	return (answer);
}

Contact	cinContact()
{
	Contact	ret(
	askUser("Enter First Name :"),
	 askUser("Enter Last Name :"),
	 askUser("Enter Nickname :"),
	 askUser("Enter Phone Number :"),
	 askUser("Enter Darkest Secret :")
	 );
	return (ret);
}
