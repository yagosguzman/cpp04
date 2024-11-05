/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysanchez <ysanchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 17:03:05 by ysanchez          #+#    #+#             */
/*   Updated: 2024/10/29 20:44:19 by ysanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() : _type("Unknown")
{
	std::cout << "Default AMateria constructor called" << std::endl;
}

AMateria::AMateria(std::string const& type) : _type(type)
{
	std::cout << "Parametrized AMateria constructor called" << std::endl;
}

AMateria::AMateria(AMateria& copy) : _type(copy.getType())
{
	std::cout << "Copy constructor called for AMateria" << std::endl;
}

AMateria::~AMateria()
{
	std::cout << "AMateria destructor called" << std::endl;
}

AMateria& AMateria::operator=(const AMateria& src)
{
	std::cout << "Copy assignment operator called for AMateria" << std::endl;
	this->_type = src._type;
	return (*this);
}

std::string const& AMateria::getType() const
{
	return (this->_type);
}

void	AMateria::use(ICharacter& target)
{
	std::cout << this->getType() << " materia used to the target " << target.getName() << std::endl;
	(void) target;
}