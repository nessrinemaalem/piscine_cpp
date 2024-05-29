/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imaalem <imaalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 19:15:52 by imaalem           #+#    #+#             */
/*   Updated: 2022/07/22 12:02:56 by imaalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <iomanip>

Contact::Contact(void) {

	return ;
}

Contact::~Contact(void) {

	return ;
}

void	Contact::initContact()
{
	this->_firstName = "";
	this->_lastName = "";
	this->_nickName = "";
	this->_num = "";
	this->_darkestSecret = "";
	this->oldest = false;
}

int	strisdigit(std::string str)
{
	if (str == "")
		return (-1);
	for (int i = 0; str[i]; i++)
	{
		if (std::isdigit(str[i]) == 0)
		{
			std::cout << "Please enter a numeric phone number" << std::endl;
			return (0);
		}	
	}
	return (1);
}

void	Contact::add()
{
	std::cout << "Let's add a new contact 🤓" << std::endl;
	std::cout << "Note: Every box must be filled up" << std::endl;
	std::cout << std::endl;
	std::cout << "What is his first name?" << std::endl;
	while (this->_firstName == "")
	{
		if (std::cin.eof())
			exit(2);
		std::getline(std::cin, this->_firstName);
	}	
	std::cout << "What is his last name?" << std::endl;
	while (this->_lastName == "")
	{
		if (std::cin.eof())
			exit(2);
		std::getline(std::cin, this->_lastName);
	}	
	std::cout << "What is his little nickname?" << std::endl;
	while (this->_nickName == "")
	{
		if (std::cin.eof())
			exit(2);
		std::getline(std::cin, this->_nickName);
	}	
	std::cout << "What is his phone number?" << std::endl;
	while (this->_num == "" || strisdigit(this->_num) != 1)
	{
		if (std::cin.eof())
			exit(2);
		std::getline(std::cin, this->_num);
	}	
	std::cout << "Tell me his darkest secret 😏" << std::endl;
	while (this->_darkestSecret == "")
	{
		if (std::cin.eof())
			exit(2);	
		std::getline(std::cin, this->_darkestSecret);
	}
	std::cout << "Your new contact has been succesfully added 🔥" << std::endl;
	std::cout << "☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆" << std::endl;
}

void	Contact::deleteOldestContact()
{	
	this->_firstName = "";
	this->_lastName	= "";
	this->_nickName = "";
	this->_num = "";
	this->_darkestSecret = "";
}

void	Contact::printCel(std::string cel)
{
	std::string	formatedCel;

	formatedCel = cel;
	if (cel.size() > 9)
	{
		formatedCel.resize(9);
		formatedCel.append(".");
	}
	std::cout << std::setfill(' ') << std::setw(10);
	std::cout << std::right << formatedCel;
}

void	Contact::printContact(int index)
{
	std::cout << "|    " << index << "     |";
	printCel(this->_firstName);
	std::cout << "|";
	printCel(this->_lastName);
	std::cout << "|";
	printCel(this->_nickName);
	std::cout << "|" << std::endl;
}

void	Contact::printInfo()
{
	if (this->_firstName == "")
	{
		std::cout << "There is no contact recorded at this index" << std::endl;
		std::cout << "☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆" << std::endl;
		return ;
	}
	std::cout << "First Name: " << this->_firstName << std::endl;
	std::cout << "Last Name: " << this->_lastName << std::endl;
	std::cout << "Nick Name: " << this->_nickName << std::endl;
	std::cout << "Phone number: " << this->_num << std::endl;
	std::cout << "Darkest secret 🤫: " << this->_darkestSecret << std::endl;
	std::cout << "☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆☆" << std::endl;
}