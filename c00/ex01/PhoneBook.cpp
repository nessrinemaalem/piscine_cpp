/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imaalem <imaalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 17:57:30 by imaalem           #+#    #+#             */
/*   Updated: 2022/07/21 19:12:57 by imaalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) {

	return ;
}

PhoneBook::~PhoneBook(void) {

	return ;
}

int	is_valid_index(std::string str)
{
	if (str.size() != 1)
		return (-1);
	if (str[0] < 49 || str[0] > 56)
		return -1;
	return 0;
}

void	PhoneBook::search()
{
	std::string	search_request = "";
	int			index;

	std::cout << "Let's search a contact 🧐" << std::endl;
	printAllContacts();
	std::cout << std::endl;
	std::cout << "Please enter the index of the contact of wich you want to get informations" << std::endl;
	while (is_valid_index(search_request) != 0)
	{
		if (std::cin.eof())
			exit(2);
		std::getline(std::cin, search_request);
		if (is_valid_index(search_request) == -1)
		{
			std::cout << "Error: Please enter a valid index" << std::endl;
			std::cout << "☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆" << std::endl;
			return ;
		}
	}
	std::cout << std::endl;
	std::cout << "You have asked for contact #" << search_request << std::endl;
	std::cout << std::endl;
	index = (int)search_request[0] - 48 - 1;
	contacts[index].printInfo();
}

void	PhoneBook::initPhoneBook()
{
	for (int i = 0; i < 8; i++)
		this->contacts[i].initContact();
}

int	PhoneBook::findOldest()
{
	for (int i = 0; 0 < 7; i++)
	{
		if (contacts[i].oldest == true)
			return (i);
	}
}

int	PhoneBook::findIndex()
{
	int	index;

	if (this->used == 8)
	{
		index = findOldest();
		if (index == 7)
		{
			contacts[index].deleteOldestContact();
			contacts[index].oldest = false;
			contacts[0].oldest = true;
		}
		else
		{
			contacts[index].deleteOldestContact();
			contacts[index].oldest = false;
			contacts[index + 1].oldest = true;
		}
		return (index);
	}
	else
	{
		index = used;
		if (index == 0)
			contacts[index].oldest = true; 
		this->used++;
		return (index);
	}
}

void	PhoneBook::printAllContacts()
{
	std::cout << "_____________________________________________" << std::endl;
	std::cout << "| Index    |First Name|Last Name |Nick Name |" << std::endl;
	std::cout << "|-------------------------------------------|" << std::endl;
	for (int i = 0; i < 8; i++)
		contacts[i].printContact(i + 1);
	std::cout << "_____________________________________________" << std::endl;
}