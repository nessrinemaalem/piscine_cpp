/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imaalem <imaalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 21:16:44 by imaalem           #+#    #+#             */
/*   Updated: 2022/07/22 12:02:01 by imaalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <cctype>
#include <cstring>
#include <stdlib.h>
#include <string.h>

class Contact{
public:
	Contact(void);
	~Contact(void);
	bool	oldest;
	void	add();
	void	printContact(int index);
	void	printInfo();
	void	initContact();
	void	deleteOldestContact();
	void	printCel(std::string cel);
	// int		numisdigit();
private:
	std::string		_firstName;
	std::string		_lastName;
	std::string		_nickName;
	std::string		_num;
	std::string		_darkestSecret;
};

#endif