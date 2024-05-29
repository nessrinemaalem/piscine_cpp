/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imaalem <imaalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 21:25:25 by imaalem           #+#    #+#             */
/*   Updated: 2022/12/28 22:16:37 by imaalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

// actions

void	Cat::makeSound()
{
	std::cout << "Meoowwww" << std::endl;
}

// canonical

Cat::Cat(void) : Animal("Cat")
{
	this->myBrain = new Brain;
	std::cout << "Cat Default constructor called" << std::endl;
}

Cat::Cat(std::string newType) : Animal(newType)
{
	if (newType == "")
		this->_Type = "Unknown";
	this->myBrain = new Brain;
	std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(const Cat& src)
{
	std::cout << "Cat Copy operator called" << std::endl;
	delete this->myBrain;
	this->myBrain = new Brain();
	*this = src;
}

Cat& Cat::operator=(const Cat& src)
{
	std::cout << "Cat Copy assignment operator called" << std::endl;
	if (this != &src)
	{
		*(this->myBrain) = *(src.myBrain);
		this->_Type = src.getType();
	}	
	return (*this);
}

Cat::~Cat()
{
	delete this->myBrain;
	std::cout << "Cat Default destructor called" << std::endl;
}