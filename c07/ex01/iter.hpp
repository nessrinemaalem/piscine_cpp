/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imaalem <imaalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 15:36:55 by imaalem           #+#    #+#             */
/*   Updated: 2023/01/22 17:46:41 by imaalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <stdio.h>
#include <iostream>

template< typename T >
void print(T const &a)
{
	std::cout << a << std::endl;
}

template< typename T >
void iter(T const *a, size_t const b, void (*print)(T const &a))
{
	for (size_t i = 0; i < b; i++)
	{
		(print)(a[i]);
	}
}

#endif
