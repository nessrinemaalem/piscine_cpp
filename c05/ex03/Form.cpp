/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imaalem <imaalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 17:17:25 by imaalem           #+#    #+#             */
/*   Updated: 2023/01/12 17:41:07 by imaalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

// actions

void Form::beSigned(Bureaucrat &src)
{
	if (this->_signGrade >= src.getGrade())
		_signed = true;
	else
		throw GradeTooLowException();
}

void	Form::checkBeforeExecute(Bureaucrat const &executor) const
{
	if (getSigned() == false)
	{
		throw Form::FormNotSignedException();
		return ;
	}
	if (executor.getGrade() > getExecGrade())
		throw Form::GradeTooLowException();
}		

std::string Form::printSigned(void)
{
	if (this->_signed == false)
		return ("false");
	if (this->_signed == true)
		return ("true");
	return (NULL);
}

// getter setter

std::string Form::getName(void) const
{
	return (this->_name);
}

int Form::getSignGrade(void) const
{
	return (this->_signGrade);
}

int Form::getExecGrade(void) const
{
	return (this->_execGrade);
}

bool Form::getSigned() const
{
	return(this->_signed);
}

void	Form::setSigned(bool sign)
{
	this->_signed = sign;
}

// Canonical Form

Form::Form(void) : _name("Default"), _signGrade(SIGNGRADE), _execGrade(EXECGRADE), _signed(false)
{
	std::cout << "Form Default constructor called" << std::endl;
}

Form::Form(std::string const name, int const signGrade, int const execGrade) : _name(name), _signGrade(signGrade), _execGrade(execGrade), _signed(false)
{
	std::cout << "Form Constructor called" << std::endl;
	if (execGrade < 1 || signGrade < 1)
		throw GradeTooHighException();
	if (execGrade > 150 || signGrade > 150)
		throw GradeTooLowException();
}

Form::Form(Form &src) : _name(src.getName()), _signGrade(src.getSignGrade()), _execGrade(src.getExecGrade()), _signed(src._signed)
{
	std::cout << "Form Copy operator called" << std::endl;
	*this = src;
}

Form &Form::operator=(const Form &src)
{
	std::cout << "Form Copy assignment operator called" << std::endl;
	if (this != &src)
		_signed = src.getSigned();
	return (*this);
}

Form::~Form()
{
	std::cout << "Form Default destructor called" << std::endl;
}

std::ostream &operator<<(std::ostream &c, Form &src)
{
	c << src.getName() << ", Form execGrade " << src.getExecGrade() << ", Form signGrade " << src.getSignGrade() << " yet signed: " << src.printSigned() << "." << std::endl;
	return (c);
}