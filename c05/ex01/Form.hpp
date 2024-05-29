/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imaalem <imaalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 17:05:49 by imaalem           #+#    #+#             */
/*   Updated: 2023/01/09 19:13:54 by imaalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
public:
	void	beSigned(Bureaucrat &src);
	class GradeTooLowException : public std::exception {
	public:
		virtual const char	*what( void ) const throw() {
			return ("Grade too low !\n");
		}	
	};
	class GradeTooHighException : public std::exception {
	public:
		virtual const char	*what( void ) const throw() {
			return ("Grade too High !\n");
		}
	};
	// getter setter
	std::string	getName(void) const;
	bool		getSigned(void);
	std::string	printSigned(void);
	int			getSignGrade(void) const;
	int			getExecGrade(void) const;
	// canonical
	Form(std::string name, int signGrade, int execGrade);
	Form(Form& src);
	Form	&operator=(const Form &src);
	~Form();
private:
	std::string	const _name;
	int			const _signGrade;
	int			const _execGrade;
	bool		_signed;
};

std::ostream	&operator<<(std::ostream &c, Form &src);

#endif

