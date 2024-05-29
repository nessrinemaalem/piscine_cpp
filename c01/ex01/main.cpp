/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imaalem <imaalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 16:22:19 by imaalem           #+#    #+#             */
/*   Updated: 2022/07/29 14:56:41 by imaalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	announce(Zombie zombie)
{
	std::cout << zombie.getName() << ": RAaaOOoor!" << std::endl;
}

int	main()
{
	Zombie		*zombies;
	int			N;
	std::string	name;

	N = 10;
	name = "clone";
	zombies = zombieHorde(N, name);
	if (!zombies)
		return (-1);
	for (int i = 0; i < N; i++)
		announce(zombies[i]);
	delete[] zombies;
	return (0);
}