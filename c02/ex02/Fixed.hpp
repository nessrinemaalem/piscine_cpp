/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imaalem <imaalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 17:24:42 by imaalem           #+#    #+#             */
/*   Updated: 2022/10/07 10:58:28 by imaalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>
#include <fstream>

class Fixed
{
private:
	int					_fixedValue;
	static const int	_fractionalValue;
public:
		Fixed(void);
		Fixed(const int nb);
		Fixed(const float f);
		Fixed(Fixed const & fix);
		~Fixed(void);

		Fixed & operator= (const Fixed & fx);

		bool	operator>( const Fixed & fx) const;
		bool	operator<( const Fixed & fx) const;
		bool	operator>=( const Fixed & fx) const;
		bool	operator<=( const Fixed & fx) const;
		bool	operator==( const Fixed & fx);
		bool	operator!=( const Fixed & fx);
		
		Fixed	operator+(const Fixed &b) const;
		Fixed	operator-(const Fixed &b) const;
		Fixed	operator*(const Fixed &b) const;
		Fixed	operator/(const Fixed &b) const;

		Fixed&	operator++(void);
		Fixed&	operator--(void);
		Fixed	operator++(int);
		Fixed	operator--(int);
		
		
		static Fixed			& min(Fixed & fx1, Fixed & fx2);
		static Fixed			& max(Fixed & fx1, Fixed & fx2);
		static Fixed const		& min(Fixed const & fx1, Fixed const & fx2);
		static Fixed const		& max(Fixed const & fx1, Fixed const & fx2);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
};

std::ostream & operator << (std::ostream & sortie, const Fixed & fx);

# endif