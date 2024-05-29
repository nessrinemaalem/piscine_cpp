/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imaalem <imaalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 18:17:44 by imaalem           #+#    #+#             */
/*   Updated: 2022/12/27 20:35:57 by imaalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

// actions

void	WrongAnimal::makeSound()
{
	std::cout << "WrongAnimal: WOoaaRrr" << std::endl;
}

std::string	WrongAnimal::getType(void)
{
	return (this->_Type);
}

// Canonical Form

WrongAnimal::WrongAnimal(void) : _Type("Default")
{
	std::cout << "WrongAnimal Default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) : _Type(type)
{
	if (type == "")
		this->_Type = "Unknown";
	std::cout << "WrongAnimal Constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& src)
{
	std::cout << "WrongAnimal Copy operator called" << std::endl;
	*this = src;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& src)
{
	std::cout << "WrongAnimal Copy assignment operator called" << std::endl;
	if (this != &src)
		this->_Type = src._Type;
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal Default destructor called" << std::endl;
}

