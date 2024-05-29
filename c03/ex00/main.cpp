/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imaalem <imaalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 13:26:01 by imaalem           #+#    #+#             */
/*   Updated: 2022/12/27 13:25:35 by imaalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

int	main( void ) {

	std::cout << std::endl;

	std::cout << "----------------------- Basic tests ----------------------------" << std::endl;

	ClapTrap sparte("Spartiate");
	ClapTrap rome("Roman");

	std::cout << std::endl;

	std::cout << "----------------------- Start war -----------------------------" << std::endl;

	sparte.attack("Roman");
	rome.takeDamage(10);

	std::cout << std::endl;

	std::cout << "----------------------- Errors ---------------------------" << std::endl;

	ClapTrap noName("");
	ClapTrap noName2;

	std::cout << std::endl;

}