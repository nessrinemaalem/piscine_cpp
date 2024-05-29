/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imaalem <imaalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 21:26:03 by imaalem           #+#    #+#             */
/*   Updated: 2022/12/27 14:16:48 by imaalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
# define SCAVTRAP_H

#include <iostream>
#include "ClapTrap.hpp"

class ClapTrap;

class ScavTrap : public ClapTrap
{
	public:
	void 	guardGate();
	void	attack(const std::string& target);
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap	&operator=(const ScavTrap &src);
	ScavTrap(const ScavTrap& src);
	virtual ~ScavTrap();
	private:
	std::string	_Name;
	int			_HitPoints;
	int			_EnergyPoints;
	int			_AttackDamage;
};

#endif