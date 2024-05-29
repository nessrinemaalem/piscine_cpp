/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMeListParsing.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imaalem <imaalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 16:23:07 by imaalem           #+#    #+#             */
/*   Updated: 2023/06/02 16:23:10 by imaalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

bool PmergeMeList::CheckErrors(char **av)
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

bool PmergeMeList::IsSorted(char **av)
{
	for (int i = 0; av[i + 1]; i++)
	{
		if (atoi((const char *)av[i]) > atoi((const char *)av[i + 1]))
			return (false);
	}
	std::cout << "Error\n";
	return (true);
}	

void	PmergeMeList::InitContainer(char **av)
{
	for (int i = 1; av[i]; i++)
		_firstChain.push_back(atoi((const char *)av[i]));
}
