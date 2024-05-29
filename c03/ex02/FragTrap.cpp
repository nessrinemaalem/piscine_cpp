/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imaalem <imaalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 21:25:25 by imaalem           #+#    #+#             */
/*   Updated: 2022/12/27 15:11:04 by imaalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ClapTrap.hpp"

//actions

void FragTrap::attack(const std::string& target)
{
	if (getEnergyPoints() > 0)
	{
		std::cout <<  this->getName() << " (FragTrap)" << " attacks " << target << ", causing " << getAttackDamage() << " points AttackDamaged!" << std::endl;
		setEnergyPoints(getEnergyPoints() - 1);
		std::cout << this->getName() << " (FragTrap)" << " has " << this->getEnergyPoints() << " EnergyPoints left" << std::endl;
		return ;
	}
	else
		std::cout << this->getName() << " (FragTrap)" << " not enough EnergyPoints to attack!" << std::endl;
	return ;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << this->getName() << ": Hight Fives guys?" << std::endl;
}

//canonical

FragTrap::FragTrap() : ClapTrap()
{
	this->_Name = "Default";
	this->_HitPoints = 100;
	this->_EnergyPoints = 100;
	this->_AttackDamage = 30;
	std::cout << "Default FragTrap Constructor has been called" << std::endl;
}

FragTrap::FragTrap( std::string name ) : ClapTrap(name, 100, 100, 30)
{
	std::cout << "FragTrap Constructor has been called" << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap const & rhs)
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

FragTrap::FragTrap(FragTrap const& src)
{
	*this = src;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap destructor has been called" << std::endl;
}
