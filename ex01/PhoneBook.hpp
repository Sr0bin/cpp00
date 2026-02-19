/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rorollin <rorollin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 10:23:47 by rorollin          #+#    #+#             */
/*   Updated: 2026/02/19 20:17:44 by rorollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class PhoneBook
{
private:
	static const size_t	MAX_CONTACT = 8;
	size_t	added_contact;
	Contact contactList[MAX_CONTACT];
	static void	printHeader();

public:
	PhoneBook();
	~PhoneBook();
	void	addContact(Contact new_contact);
	void	displayPhonebook();
	Contact *searchContact();
};

#endif
