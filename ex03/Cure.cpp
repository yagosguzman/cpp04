/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysanchez <ysanchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 19:32:06 by ysanchez          #+#    #+#             */
/*   Updated: 2024/10/28 21:17:56 by ysanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
	std::cout << "Cure default constructor called" << std::endl;
}

Cure::Cure(Cure& copy) : AMateria(copy)
{
	std::cout << "Cure Copy constructor called" << std::endl;
}

Cure::~Cure()
{
	std::cout << "Destructor called for Cure" << std::endl;
}

Cure& Cure::operator=(const Cure& src)
{
	std::cout << "Cure Copy assignment operator called" << std::endl;
	(void) src;
	return (*this);
}

AMateria* Cure::clone() const
{
	Cure* cloned = new Cure();
	std::cout << "You just cloned a Cure spell" << std::endl;
	return (cloned);
}

void	Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}