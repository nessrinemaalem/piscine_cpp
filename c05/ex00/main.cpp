/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imaalem <imaalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 19:33:30 by imaalem           #+#    #+#             */
/*   Updated: 2023/01/12 18:13:31 by imaalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main( void ) {

	Bureaucrat	ok("Brigitte", 75);
	Bureaucrat	tooLow("Chantal", 150);
	Bureaucrat	tooHigh("Patoche", 1);
	Bureaucrat	no("", 25);

	std::cout << std::endl << "--------------- Nothing ----------------" << std::endl;
	try {
		std::cout << ok;			
		ok.upGrade();
		std::cout << ok;			
		ok.upGrade();
		std::cout << ok;			
		ok.deGrade();
		std::cout << ok;			
		ok.deGrade();
		std::cout << ok;			
	}
	catch (const std::exception &e) {
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl << "--------------- Too Low ----------------" << std::endl;
	try {
		std::cout << tooLow;			
		tooLow.deGrade();
		std::cout << tooLow;			
		tooLow.deGrade();
		std::cout << tooLow;			//	can't be seen
	}
	catch (const std::exception &e) {
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl << "--------------- Too High ---------------" << std::endl;
	try {
		std::cout << tooHigh;			
		tooHigh.upGrade();
		std::cout << tooHigh;		
		tooHigh.upGrade();
		std::cout << tooHigh;			
		tooHigh.deGrade();
		std::cout << tooHigh;			
		tooHigh.upGrade();
		std::cout << tooHigh;			//	can't be seen
	}
	catch (const std::exception &e) {
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl << "--------------- Invalid ----------------" << std::endl;
	try {
		std::cout << no;
		no.upGrade();
	}
	catch (const std::exception &e) {
		std::cerr << e.what() << '\n';
	}
	try {
		std::cout << no;
		no.upGrade();
	}
	catch (const std::exception &e) {
		std::cerr << e.what() << '\n';
	}
	try {
		std::cout << no;
		no.upGrade();
	}
	catch (const std::exception &e) {
		std::cerr << e.what() << '\n';
	}
	return 0;
}