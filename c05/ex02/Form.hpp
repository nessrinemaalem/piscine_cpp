/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imaalem <imaalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 17:05:49 by imaalem           #+#    #+#             */
/*   Updated: 2023/01/11 15:32:52 by imaalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"
#include <ostream>
#include <fstream>

#define SIGNGRADE 150
#define EXECGRADE 150

class Bureaucrat;

class Form
{
public:
	virtual void	execute(Bureaucrat const &executor) const = 0;
	void			beSigned(Bureaucrat &src);
	void			checkBeforeExecute(Bureaucrat const &executor) const;
	std::string		printSigned(void);
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
	class ErrorFile : public std::exception {
	public:
		virtual const char *what( void ) const throw() {
			return ("An error occured with the file!\n");
		}
	};
	class FormNotSignedException : public std::exception {
	public:
		virtual const char *what( void ) const throw() {
			return ("The formulaire is not signed!\n");
		}
	};
	// getter setter
	std::string	getName(void) const;
	void		setSigned(bool sign);
	bool		getSigned(void) const;
	int			getSignGrade(void) const;
	int			getExecGrade(void) const;
	// canonical
	Form(void);
	Form(std::string const name, int const signGrade, int const execGrade);
	Form(Form& src);
	Form	&operator=(const Form &src);
	virtual ~Form();
private:
	std::string	const _name;
	int			const _signGrade;
	int			const _execGrade;
	bool		_signed;
};

std::ostream	&operator<<(std::ostream &c, Form &src);

#endif




// Pour finir, ajoutez la fonction membre executeForm(Form const & form) au Bureaucrat. Ce dernier doit tenter d’exécute le formulaire. 
// S’il y arrive, affichez un messagecomme :
// <bureaucrat> executed <form>
// Dans le cas contraire, affichez un message d’erreur explicite.