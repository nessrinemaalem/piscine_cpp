/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imaalem <imaalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 16:12:18 by imaalem           #+#    #+#             */
/*   Updated: 2023/01/12 18:08:32 by imaalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Bureaucrat_HPP
# define Bureaucrat_HPP

#include <iostream>
#include <string>
#include "Form.hpp"

class Form;

class Bureaucrat
{
public:
	// actions
	void	executeForm(Form const & form);
	void	checkBeforeExecute(Form const & form);
	void	signForm(Form &src);
	void	upGrade(void);
	void	deGrade(void);
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
	class Fail : public std::exception {
	public:
		virtual const char	*what( void ) const throw() {
			return ("Fail to execute!\n");
		}	
	};
	// getter setter
	std::string getName(void) const ;
	int			getGrade(void) const;
	void		setGrade(int newGrade);
	// canonical
	Bureaucrat(std::string name, int grade);
	Bureaucrat(Bureaucrat& src);
	Bureaucrat	&operator=(Bureaucrat &src);
	~Bureaucrat();
private:
	Bureaucrat(void);
	std::string	const	_name;
	int					_grade;
};

std::ostream	&operator<<(std::ostream &c, Bureaucrat &src);

#endif
