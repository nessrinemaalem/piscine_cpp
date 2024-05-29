/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversions.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imaalem <imaalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 13:43:06 by imaalem           #+#    #+#             */
/*   Updated: 2023/01/19 14:29:27 by imaalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversions.hpp"

// actions

bool	isdigit(char *s)
{
	int	i = 0;
	while (s[i])
	{
		if (s[i] != '.' && s[i] != 'f' && s[i] != '-' && isdigit(s[i]) == 0)
			return (false);
		i++;
	}
	return (true);
}

void	Conversions::toChar(void)
{
	if (isdigit(this->_s) == true)
	{
		try{
			toInt();
			this->_c = this->_i;
		}
		catch (std::exception & e){
			std::cout << e.what() << std::endl;
			return;
		}
		if (this->_c > 127 || this->_c < -128)
			throw Conversions::ImpossibleException();
		if (isprint(this->_c) == 0)
				throw Conversions::NonDisplayableException();
		return;
	}
	if (this->_s[1]){
		throw Conversions::ImpossibleException();
		return;}
	this->_c = static_cast<char>(this->_s[0]);
	if (this->_c > 127 || this->_c < -128)
		throw Conversions::ImpossibleException();
	return;
}

void		Conversions::toInt(void)
{
	try
	{
		this->_i = static_cast<int>(atoi(this->_s));
		if (this->_i <= -2147483648 || this->_i >= 2147483647 || isdigit(_s) == false)
			throw Conversions::ImpossibleException();
	}
	catch (std::invalid_argument& e) {
		throw Conversions::ImpossibleException();
		return;
	}
	catch (std::out_of_range& e) {
		throw Conversions::ImpossibleException();
		return;
	}
}

void	Conversions::toFloat(void)
{
	try
	{
		this->_f = static_cast<float>(strtof(this->_s, NULL));
	}
	catch (std::invalid_argument& e) {
		throw Conversions::ImpossibleException();
		return;
	}
	catch (std::out_of_range& e) {
		throw Conversions::ImpossibleException();
		return;
	}
}	

void	Conversions::toDouble(void)
{
	try
	{
		this->_d = static_cast<double>(strtold(this->_s, NULL));
	}
	catch (std::invalid_argument& e) {
		throw Conversions::ImpossibleException();
		return;
	}
	catch (std::out_of_range& e) {
		throw Conversions::ImpossibleException();
		return;
	}
}

// actions

char		*Conversions::getStr(void) const {return (this->_s);}
char		Conversions::getChar(void) const {return (this->_c);}
int			Conversions::getInt(void) const {return (this->_i);}
float		Conversions::getFloat(void) const {return (this->_f);}
double		Conversions::getDouble(void) const {return (this->_d);}

// canonical

Conversions::Conversions(char *s) : _s(s)
{
	// std::cout << "Conversions constructor called\n";
}

Conversions::Conversions(Conversions & rhs)
{
	*this = rhs;
	return ;
}

Conversions &Conversions::operator=(Conversions & rhs)
{
	this->_s = rhs.getStr();
	this->_c = rhs.getChar();
	this->_i = rhs.getInt();
	this->_f = rhs.getFloat();
	this->_d = rhs.getDouble();
	return (*this);
}

Conversions::~Conversions()
{
	// std::cout << "Conversions destructor called\n";
}