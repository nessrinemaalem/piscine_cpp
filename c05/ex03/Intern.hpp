/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imaalem <imaalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 17:55:32 by imaalem           #+#    #+#             */
/*   Updated: 2023/01/11 18:38:32 by imaalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include <string>
#include "Form.hpp"	
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"	

class Intern
{
public:
	// actions
	Form	*makeForm(std::string formName, std::string target);
	class FormNotFound : public std::exception {
	public:
		virtual const char	*what( void ) const throw() {
			return ("Form not found\n");
		}	
	};
	// canonical
	Intern(void);
	Intern &operator=(Intern const &rhs);
	Intern(Intern const &src);
	~Intern(void);
};

#endif

 
// Elle retourne un pointeur sur un objet Form dont le nom est passé en paramètre et dont la cible est le second paramètre.
// Elle affiche quelque chose comme :
// Intern creates <form>
// Si le nom du formulaire passé en paramètre n’existe pas, 
// affichez un message d’erreur
