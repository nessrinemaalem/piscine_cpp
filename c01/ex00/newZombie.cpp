/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imaalem <imaalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 16:05:40 by imaalem           #+#    #+#             */
/*   Updated: 2022/07/29 14:55:02 by imaalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>
#include <string>

Zombie* newZombie(std::string name)
{
	Zombie	*newZombie = NULL;
	
	newZombie = new Zombie(name);
	if (!newZombie)
	{
		std::cout << "Insufficient memory" << std::endl;
		return (NULL);
	}
	return (newZombie);
}