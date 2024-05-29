/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imaalem <imaalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 13:26:50 by imaalem           #+#    #+#             */
/*   Updated: 2022/12/27 15:01:58 by imaalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// actions

void ClapTrap::attack(const std::string& target)
{
	if (getEnergyPoints() > 0)
	{
		std::cout <<  this->getName() <<" attacks " << target << ", causing " << getAttackDamage() << " points AttackDamaged!" << std::endl;
		setEnergyPoints(getEnergyPoints() - 1);
		std::cout << this->getName() << " has " << this->getEnergyPoints() << " EnergyPoints left" << std::endl;
		return ;
	}
	else
		std::cout << this->getName() << " not enough EnergyPoints to attack!" << std::endl;
	return ;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (getHitPoints() > 0)
	{
		setHitPoints(getHitPoints() - amount);
		std::cout << this->getName() << " has taken " << amount << " points of Damaged!" << std::endl;
		std::cout << this->getName() << " has " << getHitPoints() << " HitPoints left" << std::endl;
		return ;
	}
	if (getHitPoints() <= 0)
		std::cout << this->getName() << " has not enough HitPoints to take damage! He is already KO" << std::endl;
	return ;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (getEnergyPoints() > 0)
	{
		setHitPoints(getHitPoints() + amount);
		std::cout << this->getName() << " win " << amount << " amount of HitPoints" << std::endl;
		std::cout << this->getName() << " has " <<  getHitPoints() << " HitPoints left" << std::endl;
		setEnergyPoints(getEnergyPoints() - 1);
		std::cout << this->getName() << " has " << getEnergyPoints() << " EnergyPoints left" << std::endl;
		return ;
	}
	else
		std::cout << this->getName() << "  has not enough EnergyPoints to be repaired!" << std::endl;
	return ;
}

// Canonical Form

ClapTrap::ClapTrap(void) : _Name("Default"), _HitPoints(100), _EnergyPoints(50), _AttackDamage(20)
{
	std::cout << "ClapTrap Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string Name) : _Name(Name), _HitPoints(100), _EnergyPoints(50), _AttackDamage(20)
{
	if (Name == "")
		setName("Null");
	std::cout << "ClapTrap Constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string Name, int hit, int energy, int damage) : _Name(Name), _HitPoints(hit), _EnergyPoints(energy), _AttackDamage(damage)
{
	if (Name == "")
		setName("Null");
	std::cout << "ClapTrap Constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& src)
{
	std::cout << "ClapTrap Copy operator called" << std::endl;
	*this = src;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& src)
{
	std::cout << "ClapTrap Copy assignment operator called" << std::endl;
	if (this != &src)
	{
		this->_Name = src._Name;
		this->_HitPoints = src._HitPoints;
		this->_EnergyPoints = src._EnergyPoints;
		this->_AttackDamage = src._AttackDamage;
	}
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Default destructor called" << std::endl;
}

// Getter

std::string	ClapTrap::getName()
{
	return (this->_Name);
}

int	ClapTrap::getAttackDamage()
{
	return (this->_AttackDamage);
}

int	ClapTrap::getEnergyPoints()
{
	return (this->_EnergyPoints);
}

int	ClapTrap::getHitPoints()
{
	return (this->_HitPoints);
}

// setter

void	ClapTrap::setName(std::string set)
{
	this->_Name = set;
}

void	ClapTrap::setAttackDamage(int set)
{
	this->_AttackDamage = set;
}

void	ClapTrap::setEnergyPoints(int set)
{
	this->_EnergyPoints = set;
}

void	ClapTrap::setHitPoints(int set)
{
	this->_HitPoints = set;
}

