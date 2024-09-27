/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysanchez <ysanchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 21:18:52 by ysanchez          #+#    #+#             */
/*   Updated: 2024/09/27 22:44:06 by ysanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	_type = "WrongAnimal";
	std::cout << "Wrong Animal Default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type)
{
	if (type.empty())
		_type = "WrongAnimal";
	else
		_type = type;
	std::cout << "Default WrongAnimal constructor called, type is " << _type << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal& copy)
{
	_type = copy._type;
	std::cout << "Copy constructor called, copying WrongAnimal " << copy.getType() << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Default WrongAnimal destructor called" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& src)
{
	std::cout << "WrongAnimal copy assignment operator called" << std::endl;
	_type = src._type;
	return (*this);
}

std::string	WrongAnimal::getType() const
{
	return (_type);
}

void		WrongAnimal::setType(std::string type)
{
	_type = type;
}

void		WrongAnimal::makeSound(void) const
{
	std::cout << "*Wrong Unrecognizable sound*" << std::endl;
}