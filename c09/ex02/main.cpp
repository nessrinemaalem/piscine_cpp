/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imaalem <imaalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 14:32:56 by imaalem           #+#    #+#             */
/*   Updated: 2023/06/12 18:32:00 by imaalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int ac, char **av)
{
	(void)ac;
	// {
	// 	PmergeMeVector	_vector;

	// 	if (_vector.CheckErrors(av) == false)
	// 		return (-1);
	// 	if (_vector.IsSorted(av) == true)
	// 		return (-1);
	// 	_vector.InitContainer(av);
	// 	_vector.Execute(ac);
	// }
	{
		PmergeMeList	_list;

		if (_list.CheckErrors(av) == false)
			return (-1);
		if (_list.IsSorted(av) == true)
			return (-1);
		_list.InitContainer(av);
		_list.Execute(ac);
	}
	return (0);
}
