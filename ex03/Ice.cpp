/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysanchez <ysanchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 19:45:27 by ysanchez          #+#    #+#             */
/*   Updated: 2024/10/28 21:17:43 by ysanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
	std::cout << "Ice default constructor called" << std::endl;
}

Ice::Ice(Ice& copy) : AMateria(copy)
{
	std::cout << "Ice copy constructor called" << std::endl;
}

Ice::~Ice()
{
	std::cout << "Ice Destructor called" << std::endl;
}

Ice& Ice::operator=(const Ice& src)
{
	std::cout << "Ice copy assignment operator called" << std::endl;
	(void) src;
	return (*this);
}

AMateria* Ice::clone() const
{
	Ice* cloned = new Ice();
	std::cout << "Ice cloned" << std::endl;
	return (cloned);
}

void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}