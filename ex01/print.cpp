/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rorollin <rorollin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 12:21:11 by rorollin          #+#    #+#             */
/*   Updated: 2026/01/30 12:26:42 by rorollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "print.hpp"

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
