/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imaalem <imaalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 19:36:32 by imaalem           #+#    #+#             */
/*   Updated: 2022/12/27 15:06:58 by imaalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main( void ) {

	std::cout << std::endl << "----------------------- Competitors ----------------------------" << std::endl;

	std::cout << "In order : ClapTrap(Spartiate) - ClapTrap(Gallic) - ScavTrap(Gallic) - ClapTrap(Roman) - FragTrap(Roman)" << std::endl;
	ClapTrap sparte("Spartiate");
	ScavTrap gaule("Gallic");
	FragTrap rome("Roman");

	std::cout << std::endl << "----------------------- Start war -----------------------------" << std::endl;

	gaule.attack("Spartiate");
	sparte.takeDamage(20);
	gaule.attack("Roman");
	rome.takeDamage(20);
	rome.beRepaired(70);
	sparte.attack("Gallic");
	gaule.takeDamage(0);
	gaule.beRepaired(3);
	rome.attack("Gallic");
	gaule.takeDamage(30);
	rome.attack("Gallic");
	gaule.takeDamage(30);
	rome.attack("Gallic");
	gaule.takeDamage(30);
	rome.attack("Gallic");
	gaule.takeDamage(30);

	std::cout << std::endl << "----------------------- Others --------------------------------" << std::endl;

	gaule.guardGate();
	rome.highFivesGuys();

	std::cout << std::endl << "----------------------- End of war ----------------------------" << std::endl;
	std::cout << "In order : FragTrap(Roman) - ClapTrap(Roman) - ScavTrap(Gallic) - ClapTrap(Gallic) - ClapTrap(Spartiate)" << std::endl;
	
}
