/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imaalem <imaalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 17:41:56 by imaalem           #+#    #+#             */
/*   Updated: 2023/01/13 15:19:45 by imaalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include <string>
#include "Form.hpp"

class Form;

class ShrubberyCreationForm : public Form
{
public:
	//action
	virtual void	execute(Bureaucrat const &executor) const;
	std::string		getTarget() const;
	// canonical
	// ShrubberyCreationForm(void);
	ShrubberyCreationForm(std::string const target);
	ShrubberyCreationForm(ShrubberyCreationForm& src);
	ShrubberyCreationForm	&operator=(const ShrubberyCreationForm &src);
	virtual ~ShrubberyCreationForm();
private:
	std::string	_target;
};

std::ostream	&operator<<(std::ostream &c, ShrubberyCreationForm &src);

#endif
