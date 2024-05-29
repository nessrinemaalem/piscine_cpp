/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imaalem <imaalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 21:25:25 by imaalem           #+#    #+#             */
/*   Updated: 2022/12/27 14:46:24 by imaalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

//actions

void	ScavTrap::guardGate()
{
	std::cout << this->getName() << " has activated Guard Keeper mode" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (getEnergyPoints() > 0)
	{
		std::cout <<  this->getName() << " (ScavTrap)" << " attacks " << target << ", causing " << getAttackDamage() << " points AttackDamaged!" << std::endl;
		setEnergyPoints(getEnergyPoints() - 1);
		std::cout << this->getName() << " (ScavTrap)" << " has " << this->getEnergyPoints() << " EnergyPoints left" << std::endl;
		return ;
	}
	else
		std::cout << this->getName() << " (ScavTrap)" << " not enough EnergyPoints to attack!" << std::endl;
	return ;
}

// canonical

ScavTrap &ScavTrap::operator=(ScavTrap const & rhs)
{
	if ( this != &rhs ) 
	{
		this->_Name = rhs._Name;
		this->_HitPoints = rhs._HitPoints;
		this->_EnergyPoints = rhs._EnergyPoints;
		this->_AttackDamage = rhs._AttackDamage;
	}
	return *this;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap Constructor has been called" << std::endl;
}

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "Default ScavTrap Constructor has been called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const& src)
{
	*this = src;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap destructor has been called" << std::endl;
}