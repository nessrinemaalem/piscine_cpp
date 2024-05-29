/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMeVectorParsing.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imaalem <imaalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 18:15:13 by imaalem           #+#    #+#             */
/*   Updated: 2023/06/01 17:30:37 by imaalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

bool PmergeMeVector::CheckErrors(char **av)
{
	for (int i = 1; av[i]; i++)
	{
		if (atoi((const char *)av[i]) <= 0 && (strcmp(av[i], "0") != 0))
		{
			std::cout << "Error\n";
			return (false);
		}
	}
	return (true);
}

bool PmergeMeVector::IsSorted(char **av)
{
	for (int i = 0; av[i + 1]; i++)
	{
		if (atoi((const char *)av[i]) > atoi((const char *)av[i + 1]))
			return (false);
	}
	std::cout << "Error\n";
	return (true);
}	

void	PmergeMeVector::InitContainer(char **av)
{
	for (int i = 1; av[i]; i++)
		_firstChain.push_back(atoi((const char *)av[i]));
}
