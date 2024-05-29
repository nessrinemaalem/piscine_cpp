/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imaalem <imaalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 19:33:30 by imaalem           #+#    #+#             */
/*   Updated: 2023/01/12 17:47:17 by imaalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int	main()
{
	std::cout << "test Instanciation de Bureaucrates" << std::endl;
	{	
		Bureaucrat	Macron("Macron", 1);
		Bureaucrat	GiletJaune("GiletJaune", 150);
		try
		{
			Bureaucrat	Anarchiste("Anarchiste", -42);
		} 
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	std::cout <<"---------------------------------------" << std::endl;
	std::cout << std::endl;

	std::cout << "test shrubberyform" << std::endl;
	{
		Bureaucrat	Macron("Macron", 1);
		Bureaucrat	GiletJaune("GiletJaune", 150);
	
		//Form		virtualpure(); // doit crasher
		ShrubberyCreationForm		Forest("Foret");
		try
		{
			Macron.executeForm(Forest); // pas ok
			GiletJaune.executeForm(Forest); // pas ok
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		Forest.beSigned(Macron);
		Macron.executeForm(Forest); // ok
	}
	std::cout <<"---------------------------------------" << std::endl;
	std::cout << std::endl;

	std::cout << "test prensidentila pardon" << std::endl;
	{
		Bureaucrat	Zaphod("Zaphod Beeblebrox", 1);
		Bureaucrat	GiletJaune("GiletJaune", 150);
	
		PresidentialPardonForm		Assange("Assange");
		try
		{
			Zaphod.executeForm(Assange); // pas ok
			GiletJaune.executeForm(Assange); // pas ok
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		Assange.beSigned(Zaphod); 
		Zaphod.executeForm(Assange); // ok
	}
	std::cout <<"---------------------------------------" << std::endl;
	std::cout << std::endl;

	std::cout << "test lobotomy" << std::endl;
	{
		Bureaucrat	Macron("Macron", 1);
		Bureaucrat	GiletJaune("GiletJaune", 150);
	
		RobotomyRequestForm	frankenstein("frankenstein");
		try
		{
			Macron.executeForm(frankenstein); // pas ok
			GiletJaune.executeForm(frankenstein); // pas ok
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		frankenstein.beSigned(Macron); // ok
		Macron.executeForm(frankenstein);
	}
	
	std::cout << "test intern" << std::endl;
	{
		Intern	joseph;
		Form	*ok;
		Form	*pasok;

		try
		{
			ok = joseph.makeForm("ShrubberyCreationForm", "banzai");
			pasok = joseph.makeForm("pasok", "banzai");
			std::cout << ok->getName() << std::endl;
			if (pasok != NULL)
				std::cout << pasok->getName() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	return (0);
}
