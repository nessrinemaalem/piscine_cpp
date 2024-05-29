/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imaalem <imaalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 13:26:50 by imaalem           #+#    #+#             */
/*   Updated: 2022/12/28 21:54:25 by imaalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

// actions

void	Animal::makeSound()
{
	std::cout << "Animal: WOoaaRrr" << std::endl;
}

std::string	Animal::getType(void) const
{
	return (this->_Type);
}

// Canonical Form

Animal::Animal(void) : _Type("Default")
{
	std::cout << "Animal Default constructor called" << std::endl;
}

Animal::Animal(std::string type) : _Type(type)
{
	if (type == "")
		this->_Type = "Unknown";
	std::cout << "Animal Constructor called" << std::endl;
}

Animal::Animal(const Animal& src)
{
	std::cout << "Animal Copy operator called" << std::endl;
	*this = src;
}

Animal& Animal::operator=(const Animal& src)
{
	std::cout << "Animal Copy assignment operator called" << std::endl;
	if (this != &src)
		this->_Type = src._Type;
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal Default destructor called" << std::endl;
}

