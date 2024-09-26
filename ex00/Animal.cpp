/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysanchez <ysanchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 21:18:52 by ysanchez          #+#    #+#             */
/*   Updated: 2024/09/10 19:23:33 by ysanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	_type = "Unknown";
	std::cout << "Default constructor called" << std::endl;
}

Animal::Animal(std::string type)
{
	if (!type.empty())
		_type = type;
	else
		_type = "Unknown";
	std::cout << "Default Animal constructor called, type is " << _type << std::endl;
}

Animal::Animal(Animal& copy)
{
	std::cout << "Copy constructor called, copying animal " << copy.getType() << std::endl;
	_type = copy._type;
}

Animal::~Animal()
{
	std::cout << "Default Animal destructor called" << std::endl;
}

Animal& Animal::operator=(const Animal& src)
{
	std::cout << "Animal copy assignment operator called" << std::endl;
	_type = src._type;
	return (*this);
}

std::string	Animal::getType() const
{
	return (_type);
}

void		Animal::setType(std::string type)
{
	_type = type;
}

void		Animal::makeSound(void) const
{
	if (_type == "Cat")
		std::cout << "MEOOOOOWWWW" << std::endl;
	else if (_type == "Dog")
		std::cout << "WOOOF WOOOOF" << std::endl;
	else
		std::cout << "*Unrecognizable sound*" << std::endl;
}