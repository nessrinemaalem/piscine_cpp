/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imaalem <imaalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 15:11:24 by imaalem           #+#    #+#             */
/*   Updated: 2023/05/26 14:25:09 by imaalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int ac, char **av)
{
	ReversePolishNotation	example;

	if (example.checkErrors(ac, av) == true)
	{
		std::cout << "Error\n";
		return (-1);
	}
	if (example.execute(av[1]) == false)
	{
		std::cout << "Error\n";
		return (-1);
	}
	return (0);
}