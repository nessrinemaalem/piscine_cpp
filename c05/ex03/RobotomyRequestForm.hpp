/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imaalem <imaalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 17:40:31 by imaalem           #+#    #+#             */
/*   Updated: 2023/01/13 15:20:34 by imaalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include <string>
#include "Form.hpp"
#include "Bureaucrat.hpp"
#include <cstdlib>

class Form;

class RobotomyRequestForm : public Form
{
public:
	// actions 
	void			execute(Bureaucrat const &executor) const;
	std::string		getTarget() const;
	// canonical
	// RobotomyRequestForm(void);
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(RobotomyRequestForm& src);
	RobotomyRequestForm	&operator=(const RobotomyRequestForm &src);
	~RobotomyRequestForm();
private:
	std::string	_target;
};

std::ostream	&operator<<(std::ostream &c, RobotomyRequestForm &src);

#endif
