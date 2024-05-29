/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imaalem <imaalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 19:36:32 by imaalem           #+#    #+#             */
/*   Updated: 2022/12/27 14:49:02 by imaalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main( void ) {

	std::cout << std::endl;

	std::cout << "----------------------- Basic tests ----------------------------" << std::endl;

	ClapTrap sparte("Spartiate");
	ClapTrap rome("Roman");
	ScavTrap gaule("Gallic");

	std::cout << std::endl;

	std::cout << "----------------------- Start war -----------------------------" << std::endl;

	gaule.attack("Roman");
	rome.takeDamage(20);
	
	std::cout << std::endl;

	gaule.guardGate();

	std::cout << std::endl;

	sparte.attack("Gallic");
	gaule.takeDamage(10);
	sparte.attack("Gallic");
	gaule.takeDamage(10);
	gaule.beRepaired(10);

	std::cout << std::endl;

	std::cout << "----------------------- End of war ---------------------------" << std::endl;
	
}
