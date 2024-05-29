/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imaalem <imaalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 15:36:55 by imaalem           #+#    #+#             */
/*   Updated: 2023/01/21 15:42:39 by imaalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template< typename T >
T const min(T const &a, const T &b )
{
	if (a < b)
		return (a);
	else
		return (b);
}

template< typename T >
T const max( T const &a, T const &b )
{
	if (a > b)
		return (a);
	else
		return (b);
}

template< typename T >
void swap(T &a, T &b)
{
	T tmp = a;
	a = b;
	b = tmp;
}

#endif
