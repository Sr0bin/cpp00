/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   io.hpp                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rorollin <rorollin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 00:00:00 by rorollin          #+#    #+#             */
/*   Updated: 2026/02/19 20:26:02 by rorollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IO_HPP
# define IO_HPP

# include <iostream>
# include <string>
# include "Contact.hpp"

enum Command
{
	ADD,
	SEARCH,
	EXIT,
	ENDOFFILE,
	INVALID
};
void		print_default_constructor(std::string className);
void		print_parametrized_constructor(std::string className);
void		print_destructor(std::string className);
void		printTrunc(std::string str, std::string sep);
void		printTrunc(size_t i, std::string sep);

std::string	strtrunc(const std::string str, size_t width);

std::string	askUser(std::string question);
size_t	askSizetUser(std::string question);
Contact cinContact();
Command	getCommand();

#endif
