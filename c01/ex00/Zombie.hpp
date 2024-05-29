/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imaalem <imaalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 16:07:27 by imaalem           #+#    #+#             */
/*   Updated: 2022/07/29 14:46:01 by imaalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>
#include <string>

class Zombie
{
public:
	void		announce(void);
	std::string	getName();
	void		setName(std::string name);
	Zombie();
	Zombie(std::string	name);
	~Zombie();
private:
	std::string	name;
};

Zombie* 	newZombie(std::string name);
void		randomChump(std::string name);

#endif