/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imaalem <imaalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 21:30:40 by imaalem           #+#    #+#             */
/*   Updated: 2022/07/28 22:34:19 by imaalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int ac, char **av)
{
	Harl	annoyingHarl;

	if (ac != 2)
	{
		std::cout << "Error:" << std::endl << "Wrong number of arguments" << std::endl;
		return (-1);
	}
	annoyingHarl.complain(av[1]);
	return (0);
}