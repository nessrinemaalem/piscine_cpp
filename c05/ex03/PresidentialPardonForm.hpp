/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imaalem <imaalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 20:10:51 by imaalem           #+#    #+#             */
/*   Updated: 2023/01/13 15:20:20 by imaalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTALPARDONFORM_HPP
# define PRESIDENTALPARDONFORM_HPP

#include <iostream>
#include <string>
// #include "Bureaucrat.hpp"
#include "Form.hpp"

class Form;

class PresidentialPardonForm : public Form
{
public:
	//action
	virtual void	execute(Bureaucrat const &executor) const;
	std::string		getTarget() const;
	// canonical
	// PresidentialPardonForm(void);
	PresidentialPardonForm(std::string const target);
	PresidentialPardonForm(PresidentialPardonForm& src);
	PresidentialPardonForm	&operator=(const PresidentialPardonForm &src);
	virtual ~PresidentialPardonForm();
private:
	std::string	_target;
};

std::ostream	&operator<<(std::ostream &c, PresidentialPardonForm &src);

#endif
