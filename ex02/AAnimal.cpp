/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysanchez <ysanchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 21:18:52 by ysanchez          #+#    #+#             */
/*   Updated: 2024/09/30 21:19:41 by ysanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal()
{
	_type = "Unknown";
	std::cout << "Default constructor called" << std::endl;
}

AAnimal::AAnimal(std::string type)
{
	if (type.empty())
		_type = "Unknown";
	else
		_type = type;
	std::cout << "Default AAnimal constructor called, type is " << _type << std::endl;
}

AAnimal::AAnimal(AAnimal& copy)
{
	_type = copy._type;
	std::cout << "Copy constructor called, copying Aanimal " << copy.getType() << std::endl;
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal destructor called" << std::endl;
}

AAnimal& AAnimal::operator=(const AAnimal& src)
{
	std::cout << "AAnimal copy assignment operator called" << std::endl;
	_type = src._type;
	return (*this);
}

std::string	AAnimal::getType() const
{
	return (_type);
}

void		AAnimal::setType(std::string type)
{
	_type = type;
}

void		AAnimal::makeSound(void) const
{
	std::cout << "*Unrecognizable sound*" << std::endl;
}