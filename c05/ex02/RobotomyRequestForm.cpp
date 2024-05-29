/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imaalem <imaalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 17:39:41 by imaalem           #+#    #+#             */
/*   Updated: 2023/01/13 15:19:23 by imaalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

// actions

void	RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	try
	{
		checkBeforeExecute(executor);
	}	
	catch(const std::exception& e)
	{
		std::cerr << e.what();
		throw Bureaucrat::Fail();
		return ;
	}

	std::cout << "BZzz BzzZ BZZZzzuuuuuwww" << std::endl;
	std::srand(time(NULL));
	int random_var = std::rand();
	if (random_var%2==0) {
		std::cout << _target << " was successfully robotomized\n";
	}
	else
		std::cout << _target << " failed to robotomize\n";
}

std::string	RobotomyRequestForm::getTarget() const
{
	return (this->_target);
}

// Canonical RobotomyRequestForm

// RobotomyRequestForm::RobotomyRequestForm(void) : Form("RobotomyRequestForm", 72, 45)
// {
// 	std::cout << "RobotomyRequestForm Constructor called" << std::endl;
// }

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", 72, 45), _target(target)
{
	std::cout << "RobotomyRequestForm Constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &src) : Form("RobotomyRequestForm", 72, 45)
{
	std::cout << "RobotomyRequestForm Copy operator called" << std::endl;
	this->_target = src.getTarget();
	*this = src;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &src)
{
	std::cout << "RobotomyRequestForm Copy assignment operator called" << std::endl;
	if (this != &src)
		this->_target = src.getTarget();
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm Default destructor called" << std::endl;
}

std::ostream &operator<<(std::ostream &c, RobotomyRequestForm &src)
{
	c << src.getName() << ", RobotomyRequestForm execGrade " << src.getExecGrade() << ", RobotomyRequestForm signGrade " << src.getSignGrade() << " yet signed: " << src.getSigned() << "." << std::endl;
	return (c);
}