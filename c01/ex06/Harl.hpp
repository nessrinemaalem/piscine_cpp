/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imaalem <imaalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 18:45:35 by imaalem           #+#    #+#             */
/*   Updated: 2022/07/28 21:54:46 by imaalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>
#include <map>

class Harl
{
	typedef void(Harl::*ft_ptr)(void) const;

public:
	Harl(void);
	~Harl(void);

	void	complain(std::string level);

private:
	void	debug(void)const;
	void	info(void)const;
	void	warning(void)const;
	void	error(void)const;
};

#endif