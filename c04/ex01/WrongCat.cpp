/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat .cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imaalem <imaalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 20:15:37 by imaalem           #+#    #+#             */
/*   Updated: 2022/12/27 20:15:42 by imaalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

// canonical

WrongCat::WrongCat(void) : WrongAnimal("WrongCat")
{
	std::cout << "WrongCat Default constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& src)
{
	std::cout << "WrongCat Copy operator called" << std::endl;
	*this = src;
}

WrongCat& WrongCat::operator=(const WrongCat& src)
{
	std::cout << "WrongCat Copy assignment operator called" << std::endl;
	if (this != &src)
		this->_Type = src._Type;
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat Default destructor called" << std::endl;
}