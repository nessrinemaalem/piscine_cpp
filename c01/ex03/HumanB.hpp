/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imaalem <imaalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 21:27:23 by imaalem           #+#    #+#             */
/*   Updated: 2022/07/25 15:49:13 by imaalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
#define HUMANB_H

#include "Weapon.hpp"
#include <iostream>

class HumanB
{
private:
	Weapon 		*weapon;
	std::string	name;
public:
	void		attack();
	void		setWeapon(Weapon& newWeapon);
	HumanB(std::string name);
	~HumanB();
};

#endif