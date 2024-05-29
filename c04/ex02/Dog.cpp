/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imaalem <imaalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 21:25:25 by imaalem           #+#    #+#             */
/*   Updated: 2022/12/29 18:20:01 by imaalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

// actions

void	Dog::makeSound()
{
	std::cout << "Woof woof" << std::endl;
}

// canonical

Dog::Dog(void) : Animal("Dog")
{
	this->myBrain = new Brain;
	std::cout << "Dog Default constructor called" << std::endl;
}

Dog::Dog(std::string newType) : Animal(newType)
{
	if (newType == "")
		this->_Type = "Unknown";
	this->myBrain = new Brain;
	std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(const Dog& src)
{
	std::cout << "Dog Copy operator called" << std::endl;
	this->myBrain = new Brain();
	*this = src;
}

Dog& Dog::operator=(const Dog& src)
{
	std::cout << "Dog Copy assignment operator called" << std::endl;
	if (this != &src)
	if (this != &src)
	{
		*(this->myBrain) = *(src.myBrain);
		this->_Type = src.getType();
	}	
	return (*this);
}

Dog::~Dog()
{
	delete this->myBrain;
	std::cout << "Dog Default destructor called" << std::endl;
}