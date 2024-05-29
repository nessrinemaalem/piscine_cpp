/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imaalem <imaalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 21:27:14 by imaalem           #+#    #+#             */
/*   Updated: 2022/07/29 18:01:43 by imaalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"
#include <iostream>

HumanA::HumanA(std::string name, Weapon& weapon)
: weapon(weapon), name(name)
{
	std::cout << " HumanA constructor called" << std::endl;
}

void	HumanA::attack()
{
	std::cout << name << " attacks with their " << this->weapon.getType() << std::endl;
}

HumanA::~HumanA()
{
	std::cout << "HumanA destructor called" << std::endl << std::endl;
}
