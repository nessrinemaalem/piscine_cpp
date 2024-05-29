/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imaalem <imaalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 12:46:33 by imaalem           #+#    #+#             */
/*   Updated: 2023/05/23 16:50:50 by imaalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int ac, char **av)
{
	BitcoinExchange	data;

	if (ac < 2)
	{
		std::cout << "Error: could not open file." << std::endl;
		return (-1);
	}
	if (ac > 2)
	{
		std::cout << "Error: too many files." << std::endl;
		return (-1);
	}
	data.PrintOutput(av[1]);
	return (0);
}
