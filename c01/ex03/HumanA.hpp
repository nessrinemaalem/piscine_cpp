/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imaalem <imaalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 21:27:17 by imaalem           #+#    #+#             */
/*   Updated: 2022/07/29 18:01:07 by imaalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
#define HUMANA_H

#include "Weapon.hpp"
#include <iostream>

class HumanA
{
private:
	Weapon		&weapon;
	std::string	name;
public:
	void		attack();
	HumanA(std::string name, Weapon &weapon);
	~HumanA();
};

#endif