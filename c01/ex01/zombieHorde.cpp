/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imaalem <imaalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 16:23:10 by imaalem           #+#    #+#             */
/*   Updated: 2022/07/23 19:10:00 by imaalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
	Zombie	*zombies;

	if (N <= 0)
		return (NULL);
	zombies = new Zombie[N];
	if (!zombies)
	{
		std::cout << "Insufficient memory" << std::endl;
		return (NULL);
	}
	for (int i = 0; i < N; i++)
		zombies[i].setName(name);
	return (zombies);
}
