/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imaalem <imaalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 17:24:42 by imaalem           #+#    #+#             */
/*   Updated: 2022/10/07 10:52:43 by imaalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

#include <fstream>
#include <iostream>
#include <cmath>

class Fixed
{
private:
	int					_fixedValue;
	static const int	_fractionalValue;
public:
	int		getRawBits() const;
	void	setRawBits(int const raw);
	float 	toFloat() const;
	int 	toInt() const;

	Fixed&	operator=(const Fixed& src);

	Fixed(const Fixed& src);
	Fixed(int const nbr);
	Fixed(float const nbr);
	Fixed();
	~Fixed();
};

std::ostream& operator<<(std::ostream& cout, const Fixed& src);

#endif