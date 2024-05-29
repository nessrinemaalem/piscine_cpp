/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imaalem <imaalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 15:36:55 by imaalem           #+#    #+#             */
/*   Updated: 2023/01/22 18:26:58 by imaalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <stdio.h>
#include <iostream>

template <typename T>
class Array
{
public:
	unsigned int	size(void);
	class ExceptionSegMemory : public std::exception {
	public:
		virtual const char	*what( void ) const throw() {
		return ("Trying to access unallowed memory");
		}
	};
	Array(void);
	Array(unsigned int size);
	Array(Array &src);
	Array<T> &operator=(Array &src);
	T	&operator[](unsigned int i) const;
	~Array();
private:
	unsigned int	_size;
	T				*_array;
};

template <typename T>
std::ostream	&operator<<(std::ostream &c, Array<T> &src);

#include "Array.tpp"

// Conseil : Essayez de compiler int * a = new int(); puis affichez *a.

#endif
