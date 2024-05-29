/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imaalem <imaalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 18:01:03 by imaalem           #+#    #+#             */
/*   Updated: 2023/01/12 17:36:34 by imaalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Form	*Intern::makeForm(std::string formName, std::string target)
{
	std::string	formNames[4] = {"PresidentialPardonForm", "RobotomyRequestForm", "ShrubberyCreationForm", ""};
	Form		*constructors[4] = {new PresidentialPardonForm(target), new RobotomyRequestForm(target), new ShrubberyCreationForm(target), NULL};
	Form		*res = NULL;

	try
	{
		int i = 0;
		while (i < 3)
		{
			if (formName == formNames[i])
			{
				res = constructors[i];
				break ;
			}
			i++;
		}
		int		j = 0;
		while (j < 3)
		{
			if (i != j)
				delete constructors[j];
			j++;
		}
		if (!res)
			throw FormNotFound();
		else
			return (res);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		return (0) ;
	}
}

Intern::Intern( void ) {}

Intern &Intern::operator=(Intern const &rhs)
{
	(void)rhs;
	return *this;
}

Intern::Intern(Intern const &src)
{
	*this = src;
}

Intern::~Intern(void) {}
