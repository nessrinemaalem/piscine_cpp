/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imaalem <imaalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 13:26:53 by imaalem           #+#    #+#             */
/*   Updated: 2022/12/27 15:02:10 by imaalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H

#include <iostream>

class ClapTrap
{
public:
	void		setName(std::string set);
	void		setAttackDamage(int set);
	void		setEnergyPoints(int set);
	void		setHitPoints(int set);
	virtual void		attack(const std::string& target);
	void		takeDamage(unsigned int amount);
	void 		beRepaired(unsigned int amount);
	std::string	getName();
	int			getHitPoints();
	int			getEnergyPoints();
	int			getAttackDamage();
	ClapTrap(void);
	ClapTrap(std::string name);
	ClapTrap(std::string Name, int hit, int energy, int damage);
	ClapTrap(const ClapTrap& src);
	ClapTrap	&operator=(const ClapTrap &src);
	virtual		~ClapTrap();
protected:
	std::string	_Name;
	int			_HitPoints;
	int			_EnergyPoints;
	int			_AttackDamage;
};

#endif
