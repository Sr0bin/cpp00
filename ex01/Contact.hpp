/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rorollin <rorollin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 18:43:12 by rorollin          #+#    #+#             */
/*   Updated: 2026/02/17 21:06:36 by rorollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>

class Contact {
private:
	std::string _name;
	std::string _lastName;
	std::string	_nickname;
	std::string	_phoneNumber;
	std::string	_darkestSecret;
public:
	Contact();
	Contact(std::string name, std::string lastName, std::string nickname,
		 std::string phoneNumber, std::string darkestSecret);
	~Contact();
	void	printContact();
	void	printFullContact();
	void	setContact(std::string name);
};

#endif
