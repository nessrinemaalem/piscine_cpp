/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imaalem <imaalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 21:26:03 by imaalem           #+#    #+#             */
/*   Updated: 2022/12/27 15:07:09 by imaalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FLAGTRAP_H
# define FLAGTRAP_H

#include <iostream>
#include "ClapTrap.hpp"

class ClapTrap;

class FragTrap : public ClapTrap
{
	public:
	void	attack(const std::string& target);
	void	highFivesGuys(void);
	FragTrap();
	FragTrap(std::string name);
	FragTrap	&operator=(const FragTrap &src);
	FragTrap(const FragTrap& src);
	virtual ~FragTrap();
	private:
	std::string	_Name;
	int			_HitPoints;
	int			_EnergyPoints;
	int			_AttackDamage;
};

#endif

// - montrer que l’enchaînement des constructeurs/destructeurs = bon ordre= le programme commence par créer un ClapTrap. La destruction s’effectue dans l’ordre inverse.
