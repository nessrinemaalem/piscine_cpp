/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imaalem <imaalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 17:24:42 by imaalem           #+#    #+#             */
/*   Updated: 2022/07/30 21:50:33 by imaalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

class Fixed
{
private:
	int					_fixedValue;
	static const int	_fractionalValue;
public:
	int		getRawBits() const;
	void	setRawBits(int const raw);
	Fixed & operator=(const Fixed& src);
	Fixed(const Fixed& src);
	Fixed();
	~Fixed();
};

#endif