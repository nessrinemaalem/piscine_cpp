/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imaalem <imaalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 16:22:46 by imaalem           #+#    #+#             */
/*   Updated: 2022/07/23 19:13:00 by imaalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>

class Zombie
{
	public:
	Zombie();
	~Zombie();
	std::string	getName();
	void	setName(std::string name);
	private:
	std::string	_name;	
};

Zombie* zombieHorde(int N, std::string name);

#endif