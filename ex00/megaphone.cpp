/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rorollin <rorollin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 16:04:05 by rorollin          #+#    #+#             */
/*   Updated: 2026/01/21 19:40:15 by rorollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>

static std::string	upper_string(std::string input)
{
	for (size_t i = 0; i < input.size(); ++i)
	{
		input[i] = std::toupper(input[i]);
	}
	return (input);
}

int	main(int argc, char *argv[])
{
	if (argc <= 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
		return (0);
	}
	for (int i = 1; i < argc; ++i)
		std::cout << upper_string(argv[i]);
	// std::cout << '\n';
	return (0);
}
