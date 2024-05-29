/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imaalem <imaalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 21:25:25 by imaalem           #+#    #+#             */
/*   Updated: 2022/12/27 20:16:27 by imaalem          ###   ########.fr       */
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
	std::cout << "Dog Default constructor called" << std::endl;
}

Dog::Dog(const Dog& src)
{
	std::cout << "Dog Copy operator called" << std::endl;
	*this = src;
}

Dog& Dog::operator=(const Dog& src)
{
	std::cout << "Dog Copy assignment operator called" << std::endl;
	if (this != &src)
		this->_Type = src._Type;
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog Default destructor called" << std::endl;
}