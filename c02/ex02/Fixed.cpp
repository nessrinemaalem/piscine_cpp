/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imaalem <imaalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 17:24:39 by imaalem           #+#    #+#             */
/*   Updated: 2022/10/07 10:59:28 by imaalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_fractionalValue = 8;

Fixed::Fixed(void)
{
//	std::cout << "Default constructor called" << std::endl;

	this->_fixedValue = 0;
	return ;
}

Fixed::Fixed(const int nb)
{
	// std::cout << "Int constructor called" << std::endl;

	this->_fixedValue = nb << this->_fractionalValue;
}

Fixed::Fixed(const float f)
{
	// std::cout << "Float constructor called" << std::endl;

	this->_fixedValue = roundf(f * (1 << this->_fractionalValue));
}

Fixed::Fixed(Fixed const & fix)
{
//	std::cout << "Copy constructor called" << std::endl;

	*this = fix;
	return ;
}

Fixed::~Fixed(void)
{
	// std::cout << "Destructor called" << std::endl;

	return ;
}

Fixed &	Fixed::operator=(const Fixed & fix)
{
//	std::cout << "Copy assignment operator called" << std::endl;
	
	this->_fixedValue = fix.getRawBits();
	return *this ;
}

bool	Fixed::operator>(const Fixed & fx) const
{
	return (this->toFloat() > fx.toFloat());
}

bool	Fixed::operator<(const Fixed & fx) const
{
	return (this->toFloat() < fx.toFloat());
}

bool	Fixed::operator>=(const Fixed & fx) const
{
	return (this->toFloat() >= fx.toFloat());
}

bool	Fixed::operator<=(const Fixed & fx) const
{
	return (this->toFloat() <= fx.toFloat());
}

bool	Fixed::operator==(const Fixed & fx)
{
	return (this->toFloat() == fx.toFloat());
}

bool	Fixed::operator!=(const Fixed & fx)
{
	return (this->toFloat() != fx.toFloat());
}

Fixed	Fixed::operator+(const Fixed &b) const
{
	return (this->toFloat() + b.toFloat());
}

Fixed	Fixed::operator-(const Fixed &b) const
{
	return (this->toFloat() - b.toFloat());
}

Fixed	Fixed::operator*(const Fixed &b) const
{
	return (this->toFloat() * b.toFloat());
}

Fixed	Fixed::operator/(const Fixed &b) const
{
	return (this->toFloat() / b.toFloat());
}

Fixed &		Fixed::operator++(void)
{
	this->_fixedValue++;
	return (*this);
}

Fixed		Fixed::operator++(int)
{
	Fixed	tmp = *this;

	this->_fixedValue++;
	return (tmp);
}

Fixed &		Fixed::operator--(void)
{
	this->_fixedValue--;
	return (*this);
}

Fixed		Fixed::operator--(int)
{
	Fixed	tmp = *this;

	this->_fixedValue--;
	return (tmp);
}

Fixed	& Fixed::min(Fixed & fx1, Fixed & fx2)
{
	if (fx1 < fx2)
		return (fx1);
	else
		return (fx2);
}

Fixed	& Fixed::max(Fixed & fx1, Fixed & fx2)
{
	if (fx1 > fx2)
		return (fx1);
	else
		return (fx2);
}

Fixed const	& Fixed::min(Fixed const & fx1, Fixed const & fx2)
{
	if (fx1 < fx2)
		return (fx1);
	else
		return (fx2);
}

Fixed const	& Fixed::max(Fixed const & fx1, Fixed const & fx2)
{
	if (fx1 > fx2)
		return (fx1);
	else
		return (fx2);
}

int	Fixed::getRawBits(void) const
{
	return (this->_fixedValue);
}

void	Fixed::setRawBits(int const raw)
{
	this->_fixedValue = raw;
	return ;
}

float	Fixed::toFloat(void) const
{
	return ((float)this->_fixedValue / (float)(1 << this->_fractionalValue));
}

int	Fixed::toInt(void) const
{
	return (this->_fixedValue >> this->_fractionalValue);
}

std::ostream & operator << (std::ostream & cout, const Fixed & fx)
{
	cout << fx.toFloat();
	return (cout);
}