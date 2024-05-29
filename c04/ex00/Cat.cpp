/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imaalem <imaalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 21:25:25 by imaalem           #+#    #+#             */
/*   Updated: 2022/12/28 21:48:13 by imaalem          ###   ########.fr       */
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
	std::cout << "Cat Default constructor called" << std::endl;
}

Cat::Cat(const Cat& src)
{
	std::cout << "Cat Copy operator called" << std::endl;
	*this = src;
}

Cat& Cat::operator=(const Cat& src)
{
	std::cout << "Cat Copy assignment operator called" << std::endl;
	if (this != &src)
		this->_Type = src._Type;
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat Default destructor called" << std::endl;
}