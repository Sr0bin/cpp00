/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rorollin <rorollin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 18:43:12 by rorollin          #+#    #+#             */
/*   Updated: 2026/01/30 13:52:50 by rorollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

class Contact {
private:
	std::string _name;
	std::string _lastName;
	std::string	_nickname;
	std::string	_phoneNumber;
	std::string	_darkestSecret;
public:
	Contact();
	Contact(std::string name);
	~Contact();
	void	printContact();
	void	setContact(std::string name);
};
