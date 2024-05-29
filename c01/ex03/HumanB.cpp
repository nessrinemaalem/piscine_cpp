/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imaalem <imaalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 21:27:20 by imaalem           #+#    #+#             */
/*   Updated: 2022/07/29 18:02:45 by imaalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"
#include <iostream>

void	HumanB::attack()
{
	if (!this->weapon)
	{
		std::cout << "HumanB has no weapon and can't attack" << std::endl;
		return ;
	}
	std::cout << name << " attacks with their " << this->weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon& newWeapon)
{
	std::cout << "HumanB setWeapon called" << std::endl;
	this->weapon = &newWeapon;
}

HumanB::HumanB(std::string name) : name(name)
{
	std::cout << "String constructor HumanB called" << std::endl;
}

HumanB::~HumanB()
{
	std::cout << "Destructor HumanB called" << std::endl;
}
