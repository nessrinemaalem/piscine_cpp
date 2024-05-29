/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imaalem <imaalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 11:06:44 by imaalem           #+#    #+#             */
/*   Updated: 2023/01/25 12:33:03 by imaalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <vector>
#include <exception>
#include <list>
#include <algorithm>
#include <stack>

template <typename T>
int	easyfind(T &cont, int find)
{
	typename T::iterator ret = cont.begin();
	ret = std::find(cont.begin(), cont.end(), find);
	if (ret == cont.end())
	{
		throw std::runtime_error("Value not found in container");
		return (-42);
	}
	return (*ret);
}

#endif