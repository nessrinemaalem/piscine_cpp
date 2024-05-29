/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversions.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imaalem <imaalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 13:44:10 by imaalem           #+#    #+#             */
/*   Updated: 2023/01/19 15:01:19 by imaalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSIONS_HPP
# define CONVERSIONS_HPP

#include <stdexcept>
#include <stdlib.h>
#include <ctype.h>
#include <iostream>
#include <iomanip>
#include <string>

class Conversions
{
public:
	// actions
	void		toChar();
	void		toInt();
	void		toFloat();
	void		toDouble();
	class ImpossibleException : public std::exception {
	public:
		virtual const char	*what( void ) const throw() {
			return ("Impossible");
		}	
	};
	class NonDisplayableException : public std::exception {
	public:
		virtual const char	*what( void ) const throw() {
			return ("Non Displayable");
		}	
	};
	// getter
	char		*getStr(void) const;
	char		getChar(void) const;
	int			getInt(void) const;
	float		getFloat(void) const;
	double		getDouble(void) const;
	// cononical
	Conversions(char *s);
	Conversions(Conversions &src);
	Conversions &operator=(Conversions &src);
	~Conversions();
private:
	char		*_s;
	char		_c;
	double		_d;
	float		_f;
	int			_i;
};

std::ostream & operator << (std::ostream & sortie, Conversions & rhs);

#endif
