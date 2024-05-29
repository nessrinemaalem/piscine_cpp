/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imaalem <imaalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 16:12:18 by imaalem           #+#    #+#             */
/*   Updated: 2023/01/12 18:04:07 by imaalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Bureaucrat_HPP
# define Bureaucrat_HPP

#include <iostream>
#include <string>



class Bureaucrat
{
public:
	// actions
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
	// getter setter
	std::string getName(void) const;
	int			getGrade(void);
	void		setGrade(int newGrade);
	// canonical
	Bureaucrat(void);
	Bureaucrat(std::string name, int grade);
	Bureaucrat(Bureaucrat& src);
	Bureaucrat	&operator=(Bureaucrat &src);
	~Bureaucrat();
private:
	std::string	const _name;
	int			_grade;
};

std::ostream	&operator<<(std::ostream &c, Bureaucrat &src);

#endif
