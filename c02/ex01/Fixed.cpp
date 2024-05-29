/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imaalem <imaalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 17:24:39 by imaalem           #+#    #+#             */
/*   Updated: 2022/09/14 16:25:15 by imaalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <fstream>
#include <iostream>
#include <cmath>

const int Fixed::_fractionalValue = 8;

std::ostream& operator<<(std::ostream& cout,  const Fixed& src)
{
	cout << src.toFloat();
	return (cout);
}

int	Fixed::getRawBits() const
{
	// std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixedValue);
}

void	Fixed::setRawBits(int const raw)
{
	// std::cout << "setRawBits member function called" << std::endl;
	this->_fixedValue = raw;
}

float	Fixed::toFloat() const
{
	return ((float)this->_fixedValue / (float)(1 << this->_fractionalValue));
}

int	Fixed::toInt() const
{
	return (this->_fixedValue >> this->_fractionalValue); // on decale de maniere bianire du nombre de cran que de nb decimal (inverse)
}


Fixed&	Fixed::operator=(const Fixed& src)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_fixedValue = src.getRawBits();
	return (*this);
}

Fixed::Fixed(const Fixed& src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::Fixed(int const nbr)
{
	std::cout << "Int constructor called" << std::endl;
	this->_fixedValue = nbr << this->_fractionalValue;
}

Fixed::Fixed(float const nbr)
{
	std::cout << "Float constructor called" << std::endl;
	this->_fixedValue = roundf (nbr * (1 << this->_fractionalValue));
}

Fixed::Fixed(): _fixedValue(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Default destructor called" << std::endl;
}