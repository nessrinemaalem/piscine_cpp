/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imaalem <imaalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 19:33:30 by imaalem           #+#    #+#             */
/*   Updated: 2023/01/06 15:49:34 by imaalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main( void ) {

	Bureaucrat	Bryan("Mr. Innovator", 75);
	Bureaucrat	tetedenoeud("Mr. Scumbag", 140);

	std::cout << std::endl << "--------------- Wrong Form ---------------" << std::endl;

	try {
		std::cout << "Wrong grade for signing:" << std::endl;
		Form		notWorking("Destroy earth", -2, 8);
	}
	catch (const std::exception &e) {
		std::cerr << e.what() << '\n';
	}
	try {
		std::cout << "Wrong grade for execution:" << std::endl;
		Form		notWorking2("Destroy earth 2.0", 2, -8);	
	}
	catch (const std::exception &e) {
		std::cerr << e.what() << '\n';
	}
	try {
		std::cout << "Grade for signing is 0:" << std::endl;
		Form		notWorking3("Destroy earth 2.0", 0, 8);	
	}
	catch (const std::exception &e) {
		std::cerr << e.what() << '\n';
	}
	try {
		std::cout << "Grade for execution is 200:" << std::endl;
		Form		notWorking3("Destroy earth 2.0", 5, 200);	
	}
	catch (const std::exception &e) {
		std::cerr << e.what() << '\n';
	}
	
	std::cout << "--------------- Nothing ----------------" << std::endl;
	
	{
		Form		goodForm("Make Darude - Sandstorm mondial anthem", 1, 150);
		Bureaucrat	perfect("Mr. Innovator", 1);
		std::cout << goodForm << perfect << std::endl;
		
		try {
			std::cout << "Grade to sign is 1 and execution is 150:" << std::endl;
			goodForm.beSigned(perfect);
			std::cout << goodForm << std::endl;
		}
		catch (const std::exception &e) {
			std::cerr << e.what() << '\n';
		}
	}
	std::cout << "------------------" << std::endl;
	{
		Form		goodForm("Erase Global Warming", 15, 5);
		std::cout << goodForm << Bryan << std::endl;
		
		try {
			Bryan.upGrade();
			goodForm.beSigned(Bryan);
			std::cout << goodForm << std::endl;
		}
		catch (const std::exception &e) {
			std::cerr << e.what() << "\n";
		}
	}

	std::cout << "--------------- Not signed ----------------" << std::endl;

	{
		Form		goodForm("Bring Dodo back", 7, 3);
		std::cout << goodForm << tetedenoeud << std::endl;;
		
		try {
			tetedenoeud.upGrade();
			tetedenoeud.signForm(goodForm);
			std::cout << goodForm << std::endl;	//	not showing
		}
		catch (const std::exception &e) {
			std::cout << goodForm << std::endl;
			std::cerr << e.what() << "\n";
		}
		tetedenoeud.signForm(goodForm);	//	should try catch again
	}

	return 0;
}