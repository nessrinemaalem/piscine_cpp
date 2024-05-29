/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imaalem <imaalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 17:41:29 by imaalem           #+#    #+#             */
/*   Updated: 2023/01/13 15:19:39 by imaalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <string>

// actions

void	ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	try
	{
		checkBeforeExecute(executor);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what();
		throw Bureaucrat::Fail();
		return;
	}
	
	std::fstream tmp;
	std::string	ret = this->getTarget() + "_shrubbery";

	const char *new_file = ret.c_str();
	tmp.open(new_file, std::ios::out);
	if (tmp.fail()) {
        throw Form::ErrorFile();
    }

	tmp << std::endl;
	tmp << "     *         ,@@@@@@@,     " << std::endl;
	tmp << "       ,,,.   ,@@@@@@/@@,  .oo8888o.    *" << std::endl;
	tmp << "    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o" << std::endl;
	tmp << "   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'" << std::endl;
	tmp << "   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'" << std::endl;
	tmp << "   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'" << std::endl;
	tmp << "   `&%\\ ` /%&'    |.|        \\ '|8'" << std::endl;
	tmp << "       |o|        | |    *    | |" << std::endl;
	tmp << " *     |.|        | |         | |" << std::endl;
	tmp << "    \\/ ._\\//_/__/  ,\\_//__\\/.  \\_//__/_" << std::endl;
	tmp << std::endl;
	
	std::cout << "A new file was succesfully created" << new_file << " !" << std::endl;

	tmp.close();
}

std::string	ShrubberyCreationForm::getTarget() const
{
	return (this->_target);
}

// Canonical ShrubberyCreationForm

// ShrubberyCreationForm::ShrubberyCreationForm(void) : Form("ShrubberyCreationForm", 145, 137)
// {
// 	std::cout << "ShrubberyCreationForm Constructor called" << std::endl;
// }

ShrubberyCreationForm::ShrubberyCreationForm(std::string const target) : Form("ShrubberyCreationForm", 145, 137), _target(target)
{
	std::cout << "ShrubberyCreationForm Constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &src) : Form("ShrubberyCreationForm", 145, 137)
{
	std::cout << "ShrubberyCreationForm Copy operator called" << std::endl;
	this->_target = src.getTarget();
	*this = src;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &src)
{
	std::cout << "ShrubberyCreationForm Copy assignment operator called" << std::endl;
	if (this != &src)
		this->_target = src.getTarget();
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm Default destructor called" << std::endl;
}

std::ostream &operator<<(std::ostream &c, ShrubberyCreationForm &src)
{
	c << src.getName() << ", ShrubberyCreationForm execGrade " << src.getExecGrade() << ", ShrubberyCreationForm signGrade " << src.getSignGrade() << " yet signed: " << src.getSigned() << "." << std::endl;
	return (c);
}