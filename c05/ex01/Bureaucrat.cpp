/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imaalem <imaalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 16:10:29 by imaalem           #+#    #+#             */
/*   Updated: 2023/01/12 18:07:11 by imaalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

// actions

void	Bureaucrat::signForm(Form &src)
{
	if (src.getSigned() == true)
		std::cout << this->_name << " signed " << src.getName() << std::endl;
	else
		std::cout << this->_name << " couldn't sign " << src.getName() << " because he died" << std::endl;
}

void	Bureaucrat::upGrade()
{
	int	tmp = this->_grade - 1;
	if (tmp < 1)
		throw GradeTooLowException();
	this->_grade -= 1;
}

void	Bureaucrat::deGrade()
{
	int	tmp = this->_grade + 1;
	if (tmp > 150)
		throw GradeTooHighException();
	this->_grade += 1;
}


// getter setter

std::string	Bureaucrat::getName(void) const
{
	return (this->_name);
}

int	Bureaucrat::getGrade(void)
{
	return (this->_grade);
}

void	Bureaucrat::setGrade(int newGrade)
{
	if (newGrade < 1)
		throw GradeTooHighException();
	if (newGrade > 150)
		throw GradeTooLowException();
	this->_grade = newGrade;
}

// Canonical Form

Bureaucrat::Bureaucrat(void) 
{
	std::cout << "Bureaucrat Default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
	std::cout << "Bureaucrat Constructor called" << std::endl;
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
	this->_grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat& src)
{
	std::cout << "Bureaucrat Copy operator called" << std::endl;
	*this = src;
}

Bureaucrat& Bureaucrat::operator=(Bureaucrat& src)
{
	std::cout << "Bureaucrat Copy assignment operator called" << std::endl;
	if (this != &src)
		this->_grade = src.getGrade();
	return (*this);
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat Default destructor called" << std::endl;
}

std::ostream	&operator<<(std::ostream &c, Bureaucrat &src)
{
	c << src.getName() << ", bureaucrat grade " << src.getGrade() << "." << std::endl;
	return(c);
}