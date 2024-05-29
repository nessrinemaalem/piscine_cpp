/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imaalem <imaalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 21:51:48 by imaalem           #+#    #+#             */
/*   Updated: 2022/07/19 21:19:19 by imaalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_HPP
# define PHONE_BOOK_HPP

#include "Contact.hpp"
#include <iostream>
#include <cctype>
#include <cstring>
#include <stdlib.h>
#include <string.h>

class PhoneBook{
public:
	int		used;
	Contact contacts[8];
	PhoneBook(void);
	~PhoneBook(void);
	void	search();
	void	initPhoneBook();
	int		findIndex();
	int		findOldest();
	void	printAllContacts();
private:
};

#endif