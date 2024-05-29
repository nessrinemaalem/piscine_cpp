/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imaalem <imaalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 20:15:28 by imaalem           #+#    #+#             */
/*   Updated: 2023/01/13 15:19:05 by imaalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

// actions

void	PresidentialPardonForm::execute(Bureaucrat const &executor) const
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
	std::cout << _target << "  has been forgiven by Zaphod Beeblebrox" << std::endl;
}

std::string	PresidentialPardonForm::getTarget() const
{
	return (this->_target);
}

// Canonical PresidentialPardonForm

// PresidentialPardonForm::PresidentialPardonForm(void) : Form("PresidentialPardonForm", 25, 5)
// {
// 	std::cout << "PresidentialPardonForm Constructor called" << std::endl;
// }

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm", 25, 5), _target(target)
{
	std::cout << "PresidentialPardonForm Constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &src) : Form("PresidentialPardonForm", 25, 5)
{
	std::cout << "PresidentialPardonForm Copy operator called" << std::endl;
	this->_target = src.getTarget();
	*this = src;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &src)
{
	std::cout << "PresidentialPardonForm Copy assignment operator called" << std::endl;
	if (this != &src)
		this->_target = src.getTarget();
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "PresidentialPardonForm Default destructor called" << std::endl;
}

std::ostream &operator<<(std::ostream &c, PresidentialPardonForm &src)
{
	c << src.getName() << ", PresidentialPardonForm execGrade " << src.getExecGrade() << ", PresidentialPardonForm signGrade " << src.getSignGrade() << " yet signed: " << src.getSigned() << "." << std::endl;
	return (c);
}